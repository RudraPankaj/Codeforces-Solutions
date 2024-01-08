#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;

    long int t, x, last=0, seg=0;
    cin >> t;
    while(t--){
        cin >> x;
        if(x!=last){
            last = x;
            seg++;
        }
    }
    cout << seg << nl;
}

