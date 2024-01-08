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

    ttt
    {
        ll n, k=1, res=0, ans;
        cin >> n;

        while(1){
            res += k;
            if(k!=1 && n%res == 0){
                ans = n/res;
                break;
            }
            k*=2;
        }
        cout << ans << nl;
    }

    return 0;
}
