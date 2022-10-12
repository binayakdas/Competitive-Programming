/*
Given2d array  a of N*N integers. Given Q queries and in each query 
given a, b, c, and d. Print si=um of square represented by (a,b) as
top left point and (c,d) as bottom right point

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e3+10;
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