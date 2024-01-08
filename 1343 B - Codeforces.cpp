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
        int n, ltot=0, rtot=0;
        cin >> n;
        if(n%4 != 0) cout << "NO" << nl;
        else{
            cout << "YES" << nl;
            for(int i=2; i<=n; i+=2){
                cout << i << " ";
                ltot+=i;

            }
            for(int i=1; i<(n-2); i+=2){
                cout << i << " ";
                rtot+=i;
            }
            cout << ltot-rtot << nl;
        }
    }

    return 0;
}
