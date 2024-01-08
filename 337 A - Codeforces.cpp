#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    int n, m, pz[50];
    cin >> n >> m;
    for(int i=0; i<m; i++) cin >> pz[i];
    sort(pz, pz+m);

    int ans=1000000;
	for(int i=0; i+n-1<m; i++)
		ans=min(ans,pz[i+n-1]-pz[i]);

    cout << ans << nl;

    return 0;
}
