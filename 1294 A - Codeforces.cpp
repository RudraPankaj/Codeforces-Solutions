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
        ll a,b,c,n;
        cin >> a >> b >> c >> n;
        ll sum = a+b+c+n;
        ll d = sum/3;
        if(sum%3 == 0 && max({a,b,c}) <= d) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}

