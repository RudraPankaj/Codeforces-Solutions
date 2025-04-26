#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)
#define FILLarr(a,n) for(int i=0; i<n; i++){cin>>a[i];}
#define FILLvec(a,n) for(int i=0; i<n; i++){long long int xxs; cin >> xxs; a.push_back(xxs);}
#define reversei(a) reverse(a.begin(), a.end());

int main()
{
    fast;

    ttt{

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int mx, mn;

        if (a>b){
            mx = a;
            mn = b;
        }
        else{
            mx = b;
            mn = a;
        }

        cout << "max is " << mx << " , min is " << mn << nl;

        if(c > mn && c < mx) cout << c << " > " << mn << " and " << c << " < " << mx << nl;
        if(d > mn && d < mx) cout << d << " > " << mn << " and " << d << " < " << mx << nl;

        if( ((c > mn && c < mx) && (d < mn && d > mx)) ||
             ((c < mn && c > mx) || (d > mn && d < mx)) )
            cout << "YES" << nl;
        else
            cout << "NO" << nl;

    }

    return 0;
}
