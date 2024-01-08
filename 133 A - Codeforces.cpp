#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int i;
    string p;
    cin >> p;

    for(i=0; i<p.length(); i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9' || p[i]=='+'){
            cout << "YES" << nl;
            break;
        }
    }

    if(i==p.length())
        cout << "NO" << nl;
}
