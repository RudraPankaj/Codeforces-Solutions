#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

/*void bubbleSortColumns(int a[2][n], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare the elements in the first row
            if (a[0][j] > a[0][j + 1]) {
                // Swap the elements in both rows
                for (int k = 0; k < 2; k++) {
                    int temp = a[k][j];
                    a[k][j] = a[k][j + 1];
                    a[k][j + 1] = temp;
                }
            }
        }
    }
}*/

int main()
{
    fast;

    ttt
    {
        ll n,k,x;
        cin >> n >> k;

        vector <pair<ll, ll>> a;
        vector <ll> b, result(n);

        for(ll i=0; i<n; i++){
            cin >> x;
            a.push_back(make_pair(x,i));
        }
        for(ll i=0; i<n; i++){
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        //bubbleSortColumns(a, n);

        for(ll i=0; i<n; i++){
            result[a[i].second] = b[i];
        }

        for(ll i=0; i<n; i++){
            cout << result[i] << " ";
        }
        cout << nl;

    }

    return 0;
}
