#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)
#define FILLarr(a,n) for(int i=0; i<n; i++){cin>>a[i];}
#define FILLvec(a,n) for(int i=0; i<n; i++){long long int xxs; cin >> xxs; a.push_back(xxs);}
#define reversei(a) reverse(a.begin(), a.end());

int main()
{
    fast;

    ttt{
        int n=0, x=0, f=1;
        cin >> n >> x;
        if(n==1 || n==2){
            cout << f << nl;
        }
        else {
            int i = 3;
            while(n >= i){
                f++;
                i += x;
            }
            cout << f << nl;
        }
    }

    return 0;
}
