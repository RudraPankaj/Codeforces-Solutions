//***// Author  : RudraPK
//***// Problem : 141 A (Amusing Joke) - Codeforces
//***// Student : Department of CSE, Premier University
//***// Date    : 28/11/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    string guestName, host, found;
    cin >> guestName >> host >> found;
    guestName += host;
    sort(guestName.begin(), guestName.end());
    sort(found.begin(), found.end());

    if(guestName==found){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}
