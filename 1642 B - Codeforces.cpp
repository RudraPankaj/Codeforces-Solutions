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
        ll a, b, c;
        cin >> a >> b >> c;

        puts(2*b-a>0&&(2*b-a)%c==0||(a+c)%2==0&&(a+c)/2%b==0||2*b-c>0&&(2*b-c)%a==0?"YES":"NO");
    }

    return 0;
}
