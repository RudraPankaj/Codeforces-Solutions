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

    map<string, int> mp;
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        char ch;
        cin >> ch;
        s.push_back(ch);
        if(i>0){
            string str;
            str.push_back(s[i-1]);
            str.push_back(s[i]);
            mp[str]++;
//            cout << str << " = " << mp[str] << nl;
        }
    }

    int maxi=0;
    string ans;
    for(auto it:mp){
        if(maxi < it.second){
            ans = it.first;
            maxi = it.second;
        }
    }

    cout << ans << nl;

    return 0;
}
