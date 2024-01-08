//***// Author  : RudraPK
//***// Problem : 732 A (Buy a Shovel) - Codeforces
//***// Student : Department of CSE, Premier University
//***// Date    : 26/11/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int k, r, num=0, div, res=0, cnt=0;
    cin >> k >> r;

    for(int i=1; ; i++){
        num = k*i;
        cnt=i;
        if(num%10==0) break;
        div = num/10;
        res = (div*10);
        cout << "cnt: " << cnt << ", num: " << num << ", res: " << res << nl;
        if(res+r == num) break;
    }
    cout << cnt << nl;
}
