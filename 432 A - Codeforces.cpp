#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int n, k, sum=0, x;
    cin >> n >> k;
    while(n--){
        cin >> x;
        if((x+k) <= 5) sum++;
    }
    cout << sum/3 << nl;

    return 0;
}
