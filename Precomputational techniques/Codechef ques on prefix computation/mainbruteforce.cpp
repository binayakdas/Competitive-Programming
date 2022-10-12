/*
https://www.codechef.com/problems/GCDQ
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n+1];
        for(ll i=1; i<=n; i++){
            cin>>a[i];
        }
        while(q--){
            ll l,r;
            cin>>l>>r;
            ll gc = 0;
            for(ll i=1; i<=l-1; i++){
                gc = __gcd(gc,a[i]);
            }
            for(ll i=r+1; i<=n; i++){
                gc = __gcd(gc,a[i]);
            }
            cout<<gc<<endl;
        }
    }
    
}