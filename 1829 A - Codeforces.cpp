#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        int dfr=0;
        string s, g;
        g = "codeforces";
        cin >> s;
        for(int i=0; i<10; i++){
            if(s[i] != g[i]) dfr++;
        }
        cout << dfr << nl;
    }

    return 0;
}
