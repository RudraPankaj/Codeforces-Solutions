#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    string S="codeforces";
    int n = 10;
    ttt{
        bool found = false;
        char x;
        cin >> x;
        for(int i=0; i<n; i++){
            if(x == S[i]) {
                found = true;
                break;
            }
        }
        cout << (found?"YES":"NO") << nl;
    }

    return 0;
}
