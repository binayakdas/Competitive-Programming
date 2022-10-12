/*
Given array a of N integers. Given Q queries and 
in each query given L and R, print sum of
array elements from index L to R(l,R included)
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        pf[i] = pf[i-1] + a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r] - pf[l-1]<<endl;
    }
}