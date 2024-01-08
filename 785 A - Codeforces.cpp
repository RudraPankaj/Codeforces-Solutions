//***// Author  : RudraPK
//***// Problem : 785 A (Anton and Polyhedrons) - Codeforces
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
    int n, faces=0;
    cin >> n;
    while(n--){
        string figure;
        cin >> figure;
        if(figure[0]=='T') faces+=4;
        else if(figure[0]=='C') faces+=6;
        else if(figure[0]=='O') faces+=8;
        else if(figure[0]=='D') faces+=12;
        else if(figure[0]=='I') faces+=20;
    }

    cout << faces << nl;
}

