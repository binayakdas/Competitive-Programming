#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define IO freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int main()
{
    ll n;
    cin>>n;
    if(n == 1){
        cout<<"0"<<nl;
        return 0;
    }
    bool is_prime = true;
    for(ll i=2; i*i<=n; i++){
        if(n % i == 0){
            is_prime = false;
            break;
        }
    }
    cout<<is_prime<<nl;

    vector<ll>prime_factors;
    for(ll i=2; i*i<=n; i++){
        while(n % i == 0){
            prime_factors.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        prime_factors.push_back(n);
    }
    for(auto it : prime_factors){
        cout<<it<<" ";
    }
    cout<<nl;
}