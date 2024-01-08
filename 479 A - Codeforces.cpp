#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int a,b,c, arr[6];
    cin >> a >> b >> c;

    arr[0] = a+b*c;
    arr[1] = a*(b+c);
    arr[2] = a*b*c;
    arr[3] = (a+b)*c;
    arr[4] = a+b+c;
    arr[5] = a*b+c;

    sort(arr, arr+6);

    int maxN = arr[5];
    cout << maxN << nl;
}


