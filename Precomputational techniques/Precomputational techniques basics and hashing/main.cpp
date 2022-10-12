/*
Given array a of N integers. Given Q queries and in each query given a a
number X, print count of that number in array.

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <=Q <= 10^5
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7+10;
int hsh[N];

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
}