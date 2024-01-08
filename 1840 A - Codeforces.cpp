#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        int n;
        string s, res;
        cin >> n >> s;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(s[i]==s[j]){
                    res+=s[i];
                    i=j;
                    break;
                }
            }
        }
        cout << res << nl;
    }

    return 0;
}
