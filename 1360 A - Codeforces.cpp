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
        int a,b;
        cin >> a >> b;
        if(a==b) cout << a*b*4 << nl;
        else{
            int Mini=(min(a,b))*2;
            int Maxi=max(a,b);
            if(Mini>Maxi) cout << Mini*Mini << nl;
            else cout << Maxi*Maxi << nl;
        }
    }

    return 0;
}
