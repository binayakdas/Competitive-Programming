/*
https://www.spoj.com/problems/EKO/
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e6 + 10;
ll n,m;  
ll trees[N];

bool isWoodSufficient(ll h)  // predicate function
{
    ll wood = 0;
    for(ll i=0; i<n; i++){
        if(trees[i] >= h){  // ith tree ki height agar h se zyada ya equal he toh unko kaat denge aur add kardenge
            wood += (trees[i] - h);
        }
    }
    return wood >= m;

    /* yeh bhi likh sakte he
    if(wood >= m) return true
    return false
    */
}

int main()
{
    cin>>n>>m;
    for(ll i=0; i<n; i++){
        cin>>trees[i];
    }

    // implementing binary search

    ll lo = 0, hi = 1e9, mid;  // 1e9 max height which can be possible given in constraint
    // returning something like
    // T T T T T F F F F F
    while(hi-lo > 1){
        mid = (hi+lo)/2;
        if(isWoodSufficient(mid)){   // mid height pe kaat de
            lo = mid;                // aakhri true find karna he aur max height
        }
        else{
            hi = mid - 1;            
        }
    }
    if(isWoodSufficient(hi)){  // pehle hi ke liye dekhna he jo tur hona chaiye
        cout<<hi<<endl;
    }
    else{
        cout<<lo<<endl;
    }
}

//TC = O(Nlog(h))