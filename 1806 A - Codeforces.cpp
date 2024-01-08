#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define lint long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    lint t;
    cin >> t;

    while(t--){
        lint startX, startY, destX, destY;
        cin >> startX >> startY >> destX >> destY;
        if(startX==destX && startY == destY){
            cout << 0 << nl;
            continue;
        }
        if(startY>destY){
            cout << -1 << nl;
            continue;
        }
        lint sh = destY-startY;
        if(startX < destX - sh)
            cout << -1 << nl;
        else{
            lint totShift = startX-(destX-sh)+sh;
            cout << totShift << nl;
        }
    }

}
