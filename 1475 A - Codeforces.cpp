#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt{
        ll n;
        cin >> n;

        /// (n&1) = checking if n is odd
        if(n&1) cout << "YES" << nl;

        else{
            while(!(n&1)) n/=2;
            if(n==1) cout << "NO" << nl;
            else cout << "YES" << nl;
        }
    }

    return 0;
}
