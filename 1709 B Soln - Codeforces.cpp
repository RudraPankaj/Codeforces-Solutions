#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {

    fast;
    int n, m;
    cin >> n >> m;
    int a[n+2];
    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }
    ll damF[n+2]={0}, damB[n+2]={0};

    // creating array of damage Forward
    for(int i=1; i<n; i++) {
        if(a[i+1]<a[i]) damF[i+1]=damF[i]+(a[i]-a[i+1]);
        else damF[i+1]=damF[i];
    }
    // creating array of damage Backward
    for(int i=n; i>0; i--) {
        if(a[i-1]<a[i]) damB[i-1]=damB[i]+(a[i]-a[i-1]);
        else damB[i-1]=damB[i];
    }

    while(m--){
        int s, t;
        cin >> s >> t;
        if(s<t){
            cout << damF[t]-damF[s] << nl;
        }
        else {
            cout << damB[t]-damB[s] << nl;
        }
    }
}
