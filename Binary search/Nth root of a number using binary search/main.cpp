#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double eps = 1e-6;

int main()
{
    double x;
    cin>>x;
    double lo = 1, hi = x, mid;
    while(hi - lo > eps){
        mid = (hi + lo)/2;
        if(mid * mid < x){  // to find nth root we just have to multiply mid n times
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    cout<<lo<<endl;

    /*
    p*log(N*(10^d))
    for pth root of number N with d decimal accuracy
    */
}