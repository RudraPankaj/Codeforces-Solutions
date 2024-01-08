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
        ll q;
        cin >> q;
        deque<ll> beautiful;
        if(q==1){
            ll x;
            cin >> x;
            beautiful.push_back(x);
            cout << '1' << nl;
        }
        else{
            for(int i=0; i<q; i++){
                ll x;
                cin >> x;
                beautiful.push_back(x);
            }
        }
    }

    return 0;
}
