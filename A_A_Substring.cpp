#include<bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9 + 7;
const ld EPS = 1e-9;
const int MAXN = 2e5 + 5;

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define ff first
#define ss second
#define endl '\n'

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main(){

    fast_io;

    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    for(int i=a; i<s.size()-b; i++){
        cout<<s[i]<<""; 
    }

    return 0;
}