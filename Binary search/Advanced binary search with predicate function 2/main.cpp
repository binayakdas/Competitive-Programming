/*
https://www.spoj.com/problems/AGGRCOW/
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5+10;
ll n,cows;  
ll positions[N];

bool canPlaceCows(ll minDist)  // predicate function
{
    ll lastpos = -1;      // last position store karne ke liye
    ll cows_cnt = cows;  // cows ki count
    for(ll i=0; i<n; i++){
        if(positions[i] - lastpos >= minDist || lastpos == -1){  // last pos ke current pos ko compare kar rahe he
            cows_cnt--;   // ith pos pe cow rakh di he
            lastpos = positions[i];  //last pos pe cow rakh di he
        }
        if(cows_cnt == 0) // saari cows agar placed hogyi toh
        break;
    }
    return cows_cnt == 0;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        cin>>n>>cows;
        for(ll i=0; i<n; i++){
            cin>>positions[i];
        }
        sort(positions,positions+n);  // sort karna zaroori he
    // implementing binary search

    ll lo = 0, hi = 1e9, mid, ans;  // 1e9 max height which can be possible given in constraint
    // returning something like
    // T T T T T F F F F F
    while(lo <= hi){
        mid = (hi+lo)/2;
        if(canPlaceCows(mid)){   
            ans = mid;
            lo = mid + 1;                
        }
        else{
            hi = mid - 1;            
        }
    }
    // if(canPlaceCows(hi)){  // pehle hi ke liye dekhna he jo true hona chaiye
    //     cout<<hi<<endl;
    // }
    // else{
    //     cout<<lo<<endl;
    // }
    cout<<ans<<endl;
    }
}

