#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt{
        ll x,y,k=0, cnt=0;
        cin >> x >> y;

        while(k<=y){
            int p=0;
            cout << ",, " << (k+(x*pow(10,p))) << nl;
            while((k+(x*pow(10,p))) < y){
                cout << "k=" << k << " , p=" << p << nl;
                p++;
            }
            k += (x*pow(10,p));

            cnt++;

            if(k==y) break;

            k++;
            cnt++;
            if(k==y) break;
        }

        cout << cnt << nl;
    }

    return 0;
}
