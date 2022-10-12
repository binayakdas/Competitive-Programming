#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void printBinary(int num)
{
    for(int i=10; i>=0; i--){
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}

int main()
{
    int n = 5;

    cout<<(n >> 1)<<endl; // to multiply by 2
    cout<<(n << 1)<<endl; // to divide by 2

    // upper case - lower case conversion using bit manipulation

    // upper to lower case
    char A = 'A';
    char a = A | (1 << 5);  // (1 << 5) is 32 in ascii
    cout<<a<<endl;

    // lower to upper case
    cout<< char(a  & (~(1 << 5))) <<endl;

    // alternate lower to upper
    cout<< char('c' & '_') <<endl; // output - C

    // alternate upper to lower
    cout<< char('D' | ' ') <<endl;

    // to check the power of 2
    int x = 15;
    if(x & (x - 1)){
        cout<<"not power of 2"<<endl;
    }
    else{
        cout<<"power of 2"<<endl;
    }
}