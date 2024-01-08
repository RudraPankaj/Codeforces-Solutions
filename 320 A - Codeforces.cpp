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

bool solvefor(string s){
    ll i=0, len=s.length();
    for(i=0; i<len;){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4') i+=3;
        else if(s[i]=='1' && s[i+1]=='4') i+=2;
        else if(s[i]=='1') i++;
        else return false;
    }

    return true;
}

int main()
{
    fast;
        string s;
        cin>> s;
        if(solvefor(s)) cout << "YES" << nl;
        else cout<<"NO" << nl;

    return 0;
}

