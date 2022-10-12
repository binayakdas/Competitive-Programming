#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int a = 4, b = 6;

    a = a ^ b; 
    b = b ^ a; // b --> a

    // b = b ^ (a ^ b) == b ^ b ^ a

    a = a ^ b; // a -->b
    // a = (a ^ b) ^ a ==> a ^ a ^ b -->b

    // values are swapped
    cout<<a<<" "<<b<<endl;
}