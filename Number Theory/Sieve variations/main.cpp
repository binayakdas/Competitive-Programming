#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define IO freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

const ll N = 1e7+10;
vector<bool> isPrime(N,1);
vector<ll>lp(N, 0), hp(N, 0);

int main()
{
    fast //IO
    isPrime[0] = isPrime[1] = false;
    for(ll i=2; i<N; i++){
        if(isPrime[i] == true){
            lp[i] = hp[i] = i;
            for(ll j=2*i; j<N; j += i){
                isPrime[j] = false;
                hp[j] = i;
                if(lp[j] == 0){
                    lp[j] = i;
                }
            }
        }
    }
    ll n;
    cin>>n;
    vector<ll>prime_factors;
    while(n > 1){
        ll prime_factor = hp[n];
        while(n % prime_factor == 0){
            n /= prime_factor;
            prime_factors.push_back(prime_factor);
        }
    }
    for(ll factors : prime_factors){
        cout<<factors<<" ";
    }
    cout<<nl;
}