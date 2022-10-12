#include <bits/stdc++.h>
#define ll long long int
using namespace std;

/*
Given an array of n integers. All integers are present in even count
except one. Find that one integer which has odd count in O(N) time complexity
and O(1) space;
N < 10 ^ 5
a[i] < 10 ^ 5
*/

int main()
{
    ll n;
    cin>>n;
    ll x, ans = 0;
    for(ll i=0; i<n; i++){
        cin>>x;
        ans ^= x;
    }  
    cout<<ans<<endl;
}