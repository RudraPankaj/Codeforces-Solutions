#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, k;

int main()
{
    fast;

    cin >> n >> k;
    ll half = n/2;
    if(n%2==0){
        if(k<=half)
            cout << (k*2)-1 << nl;
        else
            cout << (k*2)-n << nl;
    }
    else{
        if(k<=half+1)
            cout << k*2-1 << nl;
        else
            cout << k*2-n-1 << nl;
    }
}
