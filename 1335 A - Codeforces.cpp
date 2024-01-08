//**** // Author  : RudraPK
//*   *// Problem : 1335 A (Candies and Two Sisters) - Codeforces
//**** // Student : Department of CSE, Premier University
//*    // Date    : 29/11/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    long int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n<=2) cout << 0 << nl;
        else {
            if(n%2!=0) cout << n/2 << nl;
            else cout << (n/2)-1 << nl;
        }
    }
}
