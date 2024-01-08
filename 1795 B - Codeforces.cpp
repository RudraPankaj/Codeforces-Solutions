#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt{
        int n,k;
        cin >> n >> k;

        vector<int> gain(100,0);
        for(int i=1; i<=n; i++){
            int l,r;
            cin >> l >> r;
            if(l<=k && r>=k){
                gain[l]++;
                gain[r+1]--;
            }
        }

        for(int i=1; i<=51; i++){
            gain[i]+=gain[i-1];
        }

        if(gain[k]>gain[k-1] && gain[k]>gain[k+1]){
            cout << "YES" << nl;
        }
        else{
            cout << "NO" << nl;
        }
    }

    return 0;
}
