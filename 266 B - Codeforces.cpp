//**** // Author  : RudraPK
//*   *// Problem : 266 B (Queue at the School) - Codeforces
//**** // Student : Department of CSE, Premier University
//*    // Date    : 12/1/2022 (Happy December :-)

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n, t;
    char temp;
    cin >> n >> t;
    string s;
    cin >> s;
    AGAIN:
    for(int i=1; i<n; i++) {
        if(s[i]=='G' && s[i-1]=='B'){
            temp = s[i];
            s[i] = s[i-1];
            s[i-1] = temp;
            ++i;
        }
    }
    t--;
    if(t!=0) goto AGAIN;

    cout << s << nl;

}
