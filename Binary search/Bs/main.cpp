#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll to_find;
    cin>>to_find;
    ll lo = 0, hi = n-1, mid;
    while(hi - lo > 1){
        mid = (hi+lo)/2;
        if(a[mid] < to_find){
            lo = mid + 1;
        }
        else{
            hi = mid;
        }
    }
    if(a[lo] == to_find){
        cout<<lo<<endl;
    }
    else if(a[hi] == to_find){
        cout<<hi<<endl;
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }
}