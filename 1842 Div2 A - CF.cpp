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
        int n, m;
        cin >> n >> m;
        ull a=0, b=0;
        for(int i=0; i<n; i++){
            ull x;
            cin >> x;
            a+=x;
        }
        for(int i=0; i<m; i++){
            ull x;
            cin >> x;
            b+=x;
        }

        if(a>b) cout << "Tsondu" << nl;
        else if(a<b) cout << "Tenzing" << nl;
        else cout << "Draw" << nl;
    }

    return 0;
}
