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
        int cnt0=0, cnt1=0;
        string s;
        cin >> s;
        int sz = s.length();

        if(sz == 1){
            cout << "NET" << nl;
            return 0;
        }

        for(int i=0; i<sz; i++){
            (s[i] == '0')?cnt0++ : cnt1++;
        }
        int mn = min(cnt0, cnt1);
        if(cnt0==0 || cnt1==0) cout << "NET" << nl;
        else if(mn%2==0) cout << "NET" << nl;
        else cout << "DA" << nl;
    }

    return 0;
}
