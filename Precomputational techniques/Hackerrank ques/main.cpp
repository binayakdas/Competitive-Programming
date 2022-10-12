/*
https://www.hackerrank.com/challenges/crush/problem
*/

#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

const int N = 1e7+10;
ll arr[N];

int main()
{
    ll n,m;
    cin>>n>>m;
    while(m--){
        ll a,b,d;
        cin>>a>>b>>d;
        arr[a] += d;
        arr[b+1] -= d;
    }
    for(ll i=1; i<=n; i++){
        arr[i] += arr[i-1];
    }
    ll mx = -1;
    for(ll i=1; i<=n; i++){
        if(mx < arr[i]){
            mx = arr[i];
        }
    }
    cout<<mx<<endl;

}