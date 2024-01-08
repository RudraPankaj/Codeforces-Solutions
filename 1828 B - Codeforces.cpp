#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        int n;
        cin >> n;

        vector<int> permutation(n);

        for(int i=0; i<n; i++){
            cin >> permutation[i];
        }

        vector<int> index(n);

        for(int i=0; i<n; i++){
            index[permutation[i]-1] = i;
        }

        int maxK = 0;

        for(int i=n-1; i>=0; i--) {
            int j = index[i];
            maxK = max(maxK, i-j);
        }

        cout << maxK << nl;
    }

    return 0;
}
