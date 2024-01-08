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

    ttt
    {
        int n;
        cin >> n;
        int one=0, two=0;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            (x==1?one++:two++);
        }

        bool pos = false;

        if(two%2==0 && one%2==0) pos = true;
        else if(two%2==1 && one>0 && one%2==0) pos = true;

        if(pos) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}
