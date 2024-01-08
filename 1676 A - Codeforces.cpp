#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int t;
    cin >> t;

    while(t--){
        string num;
        cin >> num;
        if((num[0]+num[1]+num[2]-144) == (num[3]+num[4]+num[5]-144)){
            cout << "YES" << nl;
        }
        else {
            cout << "NO" << nl;
        }
    }
}
