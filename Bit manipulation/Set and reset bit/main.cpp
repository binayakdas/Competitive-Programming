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
    printBinary(9);
    int a = 9;
    int i = 3;
    
    // a me ith bit set he ya nhi yeh pata lagane ke liye
    if((a & (1 << i)) != 0){
        cout<<"set bit"<<endl;
    }
    else{
        cout<<"not set bit"<<endl;
    }

    // bit set
    printBinary(a | (1 << 1));  // to set 1st bit

    // bit unset
    // ~ is used to invert the binary (0 becomes 1 and vice versa)
    printBinary(a & ~(1 << 3)); // to unset 3rd bit

    // toggle (1 ko 0 bananan and 0 ko 1 banana)
    printBinary(a ^ (1 << 2)); // to toggle 2nd bit

    // count set bits
    int cnt = 0;
    for(int i=31; i>=0; i--){
        if((a & (1 << i)) != 0){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    // inbuilt function to count set bits
    cout<<__builtin_popcount(a)<<endl;

    // to count set bits for long integers
    cout<<__builtin_popcountll(1LL<<35)<<endl;
}