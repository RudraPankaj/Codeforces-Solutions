#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totDrink = (k*l)/nl;
    int totSliceofLime = c*d;
    int totSalt = p/np;

    int totCanMake = ((totDrink < totSliceofLime) ? ((totDrink < totSalt) ? totDrink : totSalt) : ((totSliceofLime < totSalt) ? totSliceofLime : totSalt))/n;

    cout << totCanMake << '\n';

    return 0;
}
