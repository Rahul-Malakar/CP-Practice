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

    ll n, t; cin>>n>>t;
    vll dur;
    dur.eb(-1);

    for(ll i=0; i<n; i++){
        ll d; cin>>d;
        dur.eb(d);
    }

    for(ll i = 0; i<t; i++){
        ll center, destro; cin>>center>>destro;        
        
        if(center==1){
            dur[center] -=destro;
            dur[center+1] -= destro/2;
            
        }
        else if(center == n){
            dur[center] -=destro;
            dur[center-1] -= destro/2;   
                    
        }
        else{
            dur[center] -=destro;
            dur[center-1] -= destro/2;
            dur[center+1] -= destro/2; 
        }
    }

    ll ans = 0;

    for(auto it: dur){
        if(it>=1) ans++;
    }

    cout<<ans;

    return 0;
}