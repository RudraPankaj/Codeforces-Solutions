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
        int len, U_cnt = 0, D_cnt = 0;
        cin >> len;
        string s;
        cin >> s;

        for (int i = 0; i < len; i++){
            if(s[i] == 'U')
                U_cnt++;
            else
                D_cnt++;
        }

        
        if(U_cnt%2 == 0){
            cout << "NO" << nl;
        } else if(D_cnt == 0 || U_cnt%2 == 1){
            cout << "YES" << nl;
        }
    }

    return 0;
}
