#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt{
        ll n, cnt=0;
        cin >> n;

        if(n==1) cout << 0 << nl;
        else{
            while(n>1){
                if(n%6 == 0){
                    n/=6;
                    cnt++;
//                    cout << "div by 6 = " << n << nl;
                }
                else{
                    n*=2;
                    cnt++;
//                    cout << "mul by 2 = " << n << nl;
                    if(n%6 != 0){
                        cnt = -1;
                        break;
                    }
                }
            }
            cout << cnt << nl;
        }
    }

    return 0;
}
