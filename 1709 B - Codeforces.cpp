#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    long int i, n, m, s, t, damage=0;
    cin >> n >> m;
    int a[n]= {0};
    int di[n]= {0};
    int dd[n]= {0};

    for(i=0; i<n; i++) {
        cin >> a[i];
        if(i>0 && (a[i]<a[i-1])) {
            damage = (a[i-1]-a[i]);
            di[i] = damage;
            //cout << "inc(" << a[i-1] << "," << a[i] << ") = " << damage << nl;
        }
        else if(i>0 && (a[i]>a[i-1])) {
            damage = (a[i]-a[i-1]);
            dd[i-1] = damage;
            //cout << "dec(" << a[i] << "," << a[i-1] << ") = " << damage << nl;
        }
    }
//
//    for(i=0; i<n; i++){
//        cout << di[i] << " ";
//    }
//    cout << nl;
//    for(i=0; i<n; i++){
//        cout << dd[i] << " ";
//    }
//    cout << nl;

    while(m--) {
        damage = 0;
        cin >> s >> t;
        if(s<t) {
            for(i=s; i<t; i++) {
                damage += di[i];
            }
        } else {
            for(i=t-1; i<s-1; i++) {
                damage += dd[i];
            }
        }
        cout << damage << nl;
    }
}
