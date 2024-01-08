#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)
#define FILL(a,n) for(int i=0; i<n; i++){long long int xxs; cin >> xxs; a.push_back(xxs);}
#define reversei(a) reverse(a.begin(), a.end());

int main()
{
    fast;

    ttt{
        ll n, x, know=0;
        cin >> n >> x;

        vector<ll> a;
        vector<ll> b;
        vector<ll> c;
        FILL(a,n); FILL(b,n); FILL(c,n);
        reversei(a); reversei(b); reversei(c);

        while(a.size()>0 && (a.back()&x) == a.back()){
            know |= a.back();
            a.pop_back();
        }
        while(b.size()>0 && (b.back()&x) == b.back()){
            know |= b.back();
            b.pop_back();
        }
        while(c.size()>0 && (c.back()&x) == c.back()){
            know |= c.back();
            c.pop_back();
        }

        if(know == x) cout << "Yes" << nl;
        else cout << "No" << nl;
    }

    return 0;
}
