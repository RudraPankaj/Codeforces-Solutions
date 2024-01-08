#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt long long int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        ll n, m;
        cin>>n>>m;

        vector<ll> deck[m];

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                ll x;
                cin >> x;
                deck[j].push_back(x);
            }
        }

        for(ll i=0; i<m; i++)
        {
            sort(deck[i].begin(), deck[i].end());
        }

        ll ans=0;
        for(ll i=0; i<m; i++)
        {
            vector<ll> RES(n,0);
            RES[n-1] = deck[i][n-1];
            for(ll j=n-2; j>=0; j--)
            {
                RES[j] = RES[j+1] + deck[i][j];
            }

            for(ll j=0; j<n-1; j++)
            {
                ll sum = RES[j+1]-(n-1-j)*deck[i][j];
                ans+=sum;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
