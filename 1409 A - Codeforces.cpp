#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        ll a, b;
        cin >> a >> b;
        ll r = abs(a-b);
        ll div = r/10;
        ll rem = r%10;
        if(rem<=0) cout << div << nl;
        else cout << div+1 << nl;
    }

    return 0;
}
