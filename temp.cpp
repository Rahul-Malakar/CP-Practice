#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define ld long double

#define sp setprecision
#define pb push_back
#define eb emplace_back

#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define sll set<int>
#define mii map<int,int>
#define mll map<long long,long long>

#define sort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.rbegin(), v.rend())
#define reverse(v) reverse(v.begin(), v.end())

vi subsets;

void makesubsets(vi v, int n, int i){
    if(i==n){
        for(auto it:subsets){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    subsets.eb(v[i]);
    makesubsets(v, n, i+1);
    subsets.pop_back();

    makesubsets(v, n, i+1);

}

int main()
{
    ios_base::sync_with_stdio(false);

    int n; cin>>n;
    
    vi v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    makesubsets(v, n, 0);

    return 0;
}