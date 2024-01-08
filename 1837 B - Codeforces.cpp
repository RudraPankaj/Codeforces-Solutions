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
        string s;
        cin >> n;
        cin >> s;
        int cnt = 1, ans = 0;
        for (int i = 1; i < n; i ++)
        {
            if (s[i] == s[i - 1])
                cnt ++;
            else
            {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        ans = max(ans, cnt);
        cout << ++ans << endl;
    }

    return 0;
}
