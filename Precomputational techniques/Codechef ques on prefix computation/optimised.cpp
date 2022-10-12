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
        ll forward[n+1];
        ll backward[n+1];
        forward[0] = backward[n+1] = 0;
        for(ll i=1; i<=n; i++){
            cin>>a[i];
        }
        for(ll i=1; i<=n; i++){
            forward[i] = __gcd(forward[i-1],a[i]);
        }
        for(ll i=n; i>=1; i--){
            backward[i] = __gcd(backward[i+1],a[i]);
        }
        while(q--){
            ll l,r;
            cin>>l>>r;
            cout<<__gcd(forward[l-1], backward[r+1])<<endl;
        }
    }
    
}