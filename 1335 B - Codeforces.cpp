#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)
#define FILLvec(a,n) for(int i=0; i<n; i++){long long int xxs; cin >> xxs; a.push_back(xxs);}
#define reversei(a) reverse(a.begin(), a.end());

int main()
{
    fast;

    ttt{
        int n,a,b;
        cin >> n >> a >> b;

        char ch='a';

        for(int i=1, cnt=1; i<=n; i++, cnt++){
            cout << ch++;
            if(cnt==b){
                ch='a';
                cnt=0;
            }
            if(ch > 'z') ch='a';
        }
        cout << nl;
    }

    return 0;
}
