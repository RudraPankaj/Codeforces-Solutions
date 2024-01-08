#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt{
        ll n, ans=0;
        cin >> n;

        if(n%2 == 0) ans = n/2;
        else ans = (n-1)/2;

        cout << ans << nl;
    }

    return 0;
}
