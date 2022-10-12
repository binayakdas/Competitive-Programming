#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

const ll mod = 1e18 + 7;

// if value of a or mod is very large

ll binexp(ll a, ll b)
{
    ll ans = 1;
    while(b){
        if(b & 1){
            ans = binmultiply(ans, a);
        }
        a = binmultiply(a, a);
        b >>= 1;  // right shifting b to check the last bit
    }   
    return ans;
}

ll binmultiply(ll a, ll b)
{
    ll ans = 0;
    while(b){
        if(b & 1){
            ans = (ans + a) % mod;
        }
        a = (a + a) % mod;
        b >>= 1;  // right shifting b to check the last bit
    }   
    return ans;
}

int main()
{
    ll a = 2, b = 13;
    cout<<binexpiter(a, b)<<nl;
}