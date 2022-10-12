#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

const ll mod = 1e9 + 7;

// use iterative method always
ll binexpiter(ll a, ll b)
{
    ll ans = 1;
    while(b){
        if(b & 1){
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;  // right shifting b to check the last bit
    }   
    return ans;
}

int main()
{
    ll a = 2, b = 13;
    cout<<binexpiter(a, b)<<nl;
}