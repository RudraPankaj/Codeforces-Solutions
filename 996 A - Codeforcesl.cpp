#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;

    ll n, bills=0, rem;
    cin >> n;

    bills += n/100;
    rem = n%100;
    bills += rem/20;
    rem %= 20;
    bills += rem/10;
    rem %= 10;
    bills += rem/5;
    rem %= 5;
    bills += rem;

    cout << bills << nl;
}
