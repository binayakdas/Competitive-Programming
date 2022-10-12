#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

// sliding window technique
// smallest subarray sum with given sum

int main()
{
    ll n, targetsum;
    cin>>n>>targetsum;
    ll a[n + 1];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll start = 0, currsum = 0, min_win_size = INT_MAX;
    for(ll i=0; i<n; i++){
        currsum += a[i];
        while(currsum >= targetsum){
            min_win_size = min(min_win_size, i - start + 1);
            currsum -= a[start];
            start++;
        }
    }
    cout<<min_win_size<<nl;
}