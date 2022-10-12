#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

// sliding window technique
// maximum subarray sum with k = 3 (range)

int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n + 1];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll mx = INT_MIN;
    ll currsum = 0;
    for(ll i=0; i<n; i++){
        currsum += a[i];
        if(i >= k - 1){
            mx = max(mx, currsum);
            currsum -= a[i - (k - 1)];
        }
    }
    cout<<mx<<nl;
}