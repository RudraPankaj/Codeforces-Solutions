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
        if(n<2020) cout << "NO" << nl;
        else {
            if(n%2021 == 2020 || n%2021 == 0 || n%2020 == 0)
                cout << "YES" << nl;
            else if((n/2020)>(n%2020)) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    }

    return 0;
}
