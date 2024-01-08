//***// Author  : RudraPK
//***// Problem : 148 A - Codeforces
//***// Student : Department of CSE, Premier University
//***// Date    : 24/11/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int k, l, m, n, d, ddDragons=0;
    cin >> k >> l >> m >> n >> d;
    for(int i=1; i<=d; i++){
        if((i%k == 0) || (i%l == 0) || (i%m == 0) || (i%n == 0)){
            ddDragons++;
        }
    }

    cout << ddDragons << nl;
}

