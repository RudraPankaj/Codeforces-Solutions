#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    int n, m;
    cin >> n >> m;

    cout << (((m<n)?m:n)%2==0?"Malvika":"Akshat") << nl;

    return 0;
}
