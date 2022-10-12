#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e7+10;
vector<bool> isPrime(N,1);

int main()
{
    isPrime[0] = isPrime[1] = false;
    for(ll i=2; i<N; i++){
        if(isPrime[i] == true){
            for(ll j=2*i; j<N; j += i){
                isPrime[j] = false;
            }
        }
    }
    for(ll i=1; i<100; i++){
        cout<<isPrime[i]<<" ";
    }
}

/*
Sieve of Eratosthenes is an algorithm for finding all the prime numbers in a segment  using  operations.

The algorithm is very simple: at the beginning we write down all numbers between 2 and x. 
We mark all proper multiples of 2 (since 2 is the smallest prime number) as composite. A proper multiple of a number x, is a number greater than x  and divisible by x. 
Then we find the next number that hasn't been marked as composite, in this case it is 3. Which means 3 is prime, and we mark all proper multiples of 3 as composite.
 The next unmarked number is 5, which is the next prime number, and we mark all proper multiples of it. 
 And we continue this procedure until we processed all numbers in the row.
 
 */
