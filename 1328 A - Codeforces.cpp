//***// Author  : RudraPK
//***// Problem : 1328 A (Divisibility Problem) - Codeforces
//***// Student : Department of CSE, Premier University
//***// Date    : 25/11/2022

#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define li long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int t, div;
    cin >> t;
    li a, b;
    while(t--){
        cin >> a >> b;
        div = a/b;
        if(a<b) cout << b-a << nl;
        else if(a%b == 0) cout << 0 << nl;
        else {
            int cnt=0;
            while(b*(div+1) != a) {a++,cnt++;}
            cout << cnt << nl;
        }
    }
}
