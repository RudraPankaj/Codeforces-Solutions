#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        ll x, y, n;
        cin >> x >> y >> n;

        if (n - n % x + y <= n)
        {
            cout << n - n % x + y << nl;
        }
        else
        {
            cout << n - n % x - (x - y) << nl;
        }
    }

    return 0;
}
