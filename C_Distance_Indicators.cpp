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

    int N;
    cin >> N;
    vector<long long> A(N+1);
    for (long long i = 1; i <= N; i++) cin >> A[i];

    unordered_map<long long, long long> freq;
    long long ans = 0;

    for (long long j = 1; j <= N; j++) {
        long long k2 = j - A[j];
        if (freq.count(k2)) ans += freq[k2];

        long long k1 = j + A[j];
        freq[k1]++;
    }

    cout << ans << endl;
    return 0;
}