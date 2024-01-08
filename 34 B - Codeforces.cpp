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
        int m , n;
        cin >> m >> n;
        int arr[m];
        for(int i=0; i<m; i++){
            cin >> arr[i];
        }
        sort(arr, arr+m);
        ll ans=0;
        for(int i=0; i<n; i++){
            if(arr[i]>=0) break;
            ans += abs(arr[i]);
        }

        cout << ans << nl;

    return 0;
}
