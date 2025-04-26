#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt long long t; cin >> t; while(t--)
#define FILLarr(a,n) for(int i=0; i<n; i++){cin>>a[i];}
#define FILLvec(a,n) for(int i=0; i<n; i++){long long int xxs; cin >> xxs; a.push_back(xxs);}
#define reversei(a) reverse(a.begin(), a.end());

int main()
{
    fast;

    ttt{

        ll n, k, x;
        cin >> n >> k >> x;
        ll min_sum = k*(k+1) / 2;
        ll max_sum = n*(n+1)/2 - (n-k)*(n-k+1)/2;
        if(x >= min_sum && x <= max_sum)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;

    }

    return 0;
}
