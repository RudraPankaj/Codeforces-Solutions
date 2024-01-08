//**** // Author  : RudraPK
//*   *// Problem : 1633 A (Div. 7) - Codeforces
//**** // Student : Department of CSE, Premier University
//*    // Date    : 1/12/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        if(n%7==0) cout << n << nl;
        else {
            for(int d=0; d<10; d++){
                int x = (n/10)*10+d;
                if(x%7==0){
                    cout << x << nl;
                    break;
                }
            }
        }
    }
}
