#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int gcd(int a, int b)  // log(n)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    cout<<gcd(12, 4)<<endl;
    cout<<gcd(12,18)<<endl;

    //lcm
    cout<<(12 * 18) / gcd(12, 18)<<endl;
}