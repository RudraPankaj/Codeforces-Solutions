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
        int n, m;
        cin >> n >> m;

        int adds = (n-1)/(m-1);
        int ans = (n+adds);

        cout << ans << nl;

    return 0;
}
