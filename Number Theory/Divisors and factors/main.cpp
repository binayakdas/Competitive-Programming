#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define IO freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int main()
{
    fast //IO

    // Count and sum of Divisors
    int n;
    cin>>n;
    ll cnt = 0, sum = 0;
    for(ll i=1; i*i<=n; i++){
        if(n % i == 0){
            cout<<i<<" "<<n / i<<nl;
            cnt++;
            sum += i;
            if(n / i != i){
                sum ++ n / i;
                cnt++;
            }
        }
    }
    cout<<cnt<<" "<<sum<<nl;
    // O(sqrt(N))

    // Optimised
}