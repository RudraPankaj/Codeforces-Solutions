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
        int n, ans;
        ans = 0;
        cin >> n;
        int arr[n+1]={0};
        for(int i=1; i<=n; i++) cin >> arr[i];
        sort(arr, arr+n+1);

        for(int i=1, j=n; i<=(n/2); i++,j--){
            ans += (arr[j]-arr[i]);
        }
        cout << ans << nl;
    }

    return 0;
}
