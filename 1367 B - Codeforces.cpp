#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define ln "\n"

int main()
{
    ll t;
    cin >> t;
    for(int it=1; it<=t; it++) {
        int t1 = 0;
        int t2 = 0;

        int n; cin>>n;
        forn(i,n){
            int a;
            cin >> a;
            if(i%2==0 && a%2!=0) t1++;
            else if(i%2!=0 && a%2==0) t2++;
        }
        if(t1!=t2)
            cout << -1 << ln;
        else{
            cout << t1 << ln;
        }
    }
    return 0;
}
