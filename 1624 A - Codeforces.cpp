#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        cout << a[n-1]-a[0] << nl;
    }

    return 0;
}
