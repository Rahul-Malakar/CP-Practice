#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {

        ll a,b; cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;

        }
        else{
            cout<<1<<endl;
        }
        
    }

    return 0;
}