#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int lower_bound(vector<ll> &v, int element)
{
    int lo = 0, hi = v.size()-1, mid;
    while(hi-lo > 1){
        mid = (lo+hi)/2;
        if(v[mid] < element){
            lo = mid + 1;
        }
        else{
            hi = mid;
        }
    }
    if(v[lo] >= element){
        return lo;
    }
    if(v[hi] >= element){
        return hi;
    }
    return -1;
}

int upper_bound(vector<ll> &v, int element)
{
    int lo = 0, hi = v.size()-1, mid;
    while(hi-lo > 1){
        mid = (lo+hi)/2;
        if(v[mid] <= element){
            lo = mid + 1;
        }
        else{
            hi = mid;
        }
    }
    if(v[lo] > element){
        return lo;
    }
    if(v[hi] > element){
        return hi;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    // array must be sorted.

    int element;
    cin>>element;
    int lb = lower_bound(v,element);
    cout<<lb<<" "<<(lb != -1 ? v[lb] : -1)<<endl;
    int ub = upper_bound(v,element);
    cout<<ub<<" "<<(ub != -1 ? v[ub] : -1)<<endl;
}