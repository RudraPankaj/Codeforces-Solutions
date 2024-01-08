#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;

    ll n, ans=0, maxi=0;
    cin >> n;
    ll plround=0;
    for(ll i=0; i<n; i++){
        cin >> plround;
        ans += plround;
        if(maxi<plround) maxi=plround;
    }

    ans = ceil((float)ans / (n - 1));
    if(ans<maxi) ans=maxi;

    cout << ans << nl;

    return 0;
}
