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
        int n, mini=1111;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);

        for(int i=0; i<n-1; i++){
            if(mini > abs(arr[i]-arr[i+1])) mini = abs(arr[i]-arr[i+1]);
            if(mini == 0) break;
        }

        cout << mini << nl;
    }

    return 0;
}
