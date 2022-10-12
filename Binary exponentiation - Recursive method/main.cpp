#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

const ll mod = 1e9 + 7;

ll binexprec(ll a, ll b)
{
    if(b == 0) return 1;
    ll res = binexprec(a, b / 2);
    if(b & 1){
        return (a * ((res * 1ll * res) % mod)) % mod;
    }
    else{
        return (res * 1ll * res) % mod;
    }
}

int main()
{
    ll a = 2, b = 13;
    cout<<binexprec(a, b)<<nl;
}