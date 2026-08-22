#include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ld long double
#define sp setprecision
#define eb emplace_back
#define vi vector<int>
 
int main(){
    ll a,b; cin>>a>>b;
    ll k=max(a,b);
    ll n=7-k;
    
    vector<string> ans = {"1/6","1/3","1/2","2/3","5/6","1/1"};
    cout<<ans[n-1];
    return 0;
}