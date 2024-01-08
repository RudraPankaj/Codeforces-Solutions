#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    string str, res;
    cin >> str;
    bool ff = false;
    int n = str.length();

    for(int i=0; i<n; i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i+=2;
            if(ff && res.back() != ' ') res+=' ';
        }
        else{
            res+=str[i];
            if(!ff) ff = true;
        }
    }

    cout << res << nl;

    return 0;
}
