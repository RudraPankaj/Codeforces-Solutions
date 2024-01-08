#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    int n;
    cin>>n;

    if(n==2) cout << 1 << nl << 2 << nl;
    else if(n==3) cout << 1 << nl << 3 << nl;
    else if(n%2==0)
    {
        cout << (n/2) << nl;
        for(int i=0; i<(n/2)-1; i++) cout << 2 << " ";
        cout << 2 << nl;
    }
    else
    {
        cout << ((n-3)/2)+1 << nl;
        for(int i=0; i<((n-3)/2); i++) cout << 2 << " ";
        cout << 3 << nl;
    }

    return 0;
}
