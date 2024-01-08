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
        int x, n, m;
        cin >> x >> n >> m;

        while(n-- && x>20){
            x = (x/2)+10;
        }

        while(m--){
            x-=10;
            if(x<=0) break;
        }

        if(x<=0) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}
