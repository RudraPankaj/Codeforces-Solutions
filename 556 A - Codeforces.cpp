#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)
#define FILLvec(a,n) for(int i=0; i<n; i++){long long int xxs; cin >> xxs; a.push_back(xxs);}
#define reversei(a) reverse(a.begin(), a.end());

int main()
{
    fast;

    ll n, zero=0, one=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char ch;
        cin>>ch;
        if(ch=='0') zero++;
        else one++;
    }
    if(zero == one) cout << 0 << nl;
    else cout << abs(zero-one) << nl;

    return 0;
}
