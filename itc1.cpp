#include <bits/stdc++.h>
using namespace std;

class hoffmann {
public:
    struct Node {
        char ch;
        int freq;
        Node* left;
        Node* right;

        Node(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
    };

    struct Compare {
        bool operator()(Node* a, Node* b) {
            return a->freq > b->freq; 
        }
    };

    unordered_map<char, string> huffmanCode;
    Node* root;

    hoffmann() : root(nullptr) {}

    void build_tree(vector<char>& chars, vector<int>& freqs) {
        priority_queue<Node*, vector<Node*>, Compare> pq;

        
        for (int i = 0; i < chars.size(); i++) {
            pq.push(new Node(chars[i], freqs[i]));
        }

       
        while (pq.size() > 1) {
            Node* left = pq.top(); pq.pop();
            Node* right = pq.top(); pq.pop();

           
            Node* newNode = new Node('\0', left->freq + right->freq);
            newNode->left = left;
            newNode->right = right;

            pq.push(newNode);
        }

        
        root = pq.top();
    }

    void build_code(Node* node, string str) {
        if (!node) return;

       
        if (!node->left && !node->right) {
            huffmanCode[node->ch] = str;
        }

        build_code(node->left, str + "0");
        build_code(node->right, str + "1");
    }

    void print_code() {
        for (auto& pair : huffmanCode) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    hoffmann h;

   
    vector<char> chars = {'a', 'b', 'c', 'd', 'e', 'f'};
    vector<int> freqs = {5, 9, 12, 13, 16, 45};

    
    h.build_tree(chars, freqs);

    
    h.build_code(h.root, "");

    
    h.print_code();

    return 0;
}