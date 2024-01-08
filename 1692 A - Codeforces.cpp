
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
        int a,b,c,d;
        int res=0;
        cin >> a;
        cin >> b;
        if(b>a) res++;
        cin >> c;
        if(c>a) res++;
        cin >> d;
        if(d>a) res++;

        cout << res << nl;

    }

    return 0;
}
