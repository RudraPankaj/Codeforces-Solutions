#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt{
        int n;
        bool suspicious = false;
        string s;
        cin >> n >> s;

        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]) continue;
            else {
                for(int j=i+2; j<n; j++){
                    if(s[i]==s[j]){
                        suspicious = true;
                        break;
                    }
                }
            }
        }

        if(suspicious) cout << "NO" << nl;
        else cout << "YES" << nl;
    }

    return 0;
}

