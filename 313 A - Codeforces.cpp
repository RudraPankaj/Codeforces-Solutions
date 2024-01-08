#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

        string s;
        cin >> s;

        int sz = s.length();
        if(s[0] != '-') cout << s << nl;
        else{
            if(sz==3 && s[sz-1] == '0' && s[sz-2] > '0'){
                cout << 0 << nl;
            }
            else if(s[sz-2] < s[sz-1]){
                for(int i=0; i<sz-1; i++){
                    cout << s[i];
                }
                cout << nl;
            }
            else {
                for(int i=0; i<sz; i++){
                    if(i != sz-2) cout << s[i];
                }
                cout << nl;
            }
        }

    return 0;
}
