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

void solve(){
    char a[3][3];
        for(int i = 0; i < 3; ++i)
        {
            for(int j = 0; j < 3; ++j)
            {
                cin >> a[i][j];
            }
        }

        for(int i = 0; i < 3; ++i)
        {
            if(a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] != '.')
            {
                cout << a[i][0] << "\n";
                return;
            }
        }

        for(int i = 0; i < 3; ++i)
        {
            if(a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] != '.')
            {
                cout << a[0][i] << "\n";
                return;
            }
        }

        if(a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[1][1] != '.')
        {
            cout << a[0][0] << "\n";
            return;
        }

        if(a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] != '.')
        {
            cout << a[2][0] << "\n";
            return;
        }

        cout << "DRAW\n";
}

int main()
{
    fast;

    ttt
    {
        solve();
    }

    return 0;
}
