//***// Author  : RudraPK
//***// Problem : 61 A (Ultra-Fast Mathematician) - Codeforces
//***// Student : Department of CSE, Premier University
//***// Date    : 27/11/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    string a1, a2;
    cin >> a1 >> a2;
    int len = a1.length();
    for(int i=0; i<len; i++){
        if(a1[i] != a2[i])
            cout << 1;
        else
            cout << 0;
    }
    cout << nl;
}
