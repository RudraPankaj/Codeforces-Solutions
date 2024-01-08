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

    string s;
    bool isDanger = false;
    cin >> s;
    int len = s.length();
    for(int i=0; i<len-6; i++){
        if(s[i]==s[i+1] &&
           s[i]==s[i+2] &&
           s[i]==s[i+3] &&
           s[i]==s[i+4] &&
           s[i]==s[i+5] &&
        s[i]==s[i+6]){
            isDanger = true;
            break;
        }
    }

    if(isDanger) cout << "YES" << nl;
    else cout << "NO" << nl;

    return 0;
}

