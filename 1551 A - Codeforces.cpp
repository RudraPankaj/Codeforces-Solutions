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
        ll number, c1=0, c2=0;
        cin >> number;

        c1 = number/3;
        c2 = (number-c1)/2;

        cout << c1+(number-(c1+c2*2)) << " " << c2 << nl;
    }

    return 0;
}
