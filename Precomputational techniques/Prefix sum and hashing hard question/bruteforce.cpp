/*
Luffy with his crew is on his way to Dressrosa, where he will be fighting one of
the warlords of the sea Doflamingo. But now he is getting bored ans wants to do a 
fun activity, He is very much obsessed with palinfromes. Given a string S of the 
lower case English alphabet of lenght N and two integers L and R he wants to know
whether all the letters of the substring from index L to R can be rearranged to 
form a palindrome or not. He wants to know this for Q queries of L and R and needs
your help in finding the answer.

CONSTRAINTS:
1 <= t <= 10
1 <= N,Q <= 100000
1 <= L <= R <= N
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--){
            ll l,r;
            cin>>l>>r;
            ll hsh[26];
            for(ll i=0; i<26; i++){
                hsh[i] = 0;
            }
            l--;r--;
            for(ll i=l; i<=r ;i++){
                hsh[s[i] - 'a']++;
            }
            ll oddcnt = 0;
            for(ll i=0; i<26; i++){
                if(hsh[i]%2 != 0){
                    oddcnt++;
                }
            }
            if(oddcnt > 1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}

// O(t * (n + q * (26 + n + 26)))
// O(t*q*n) = 10 * 10^5 * 10^5
// Hence give TLE