#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main(){
    fast;
    int n,k;
    cin>>n;
    int host=0,guest=0;
    vector<pair<int,int>> colors;
    for(k=0;k<n;k++){
        cin>>host>>guest;
        colors.push_back(pair<int,int>(host,guest));
    }
    int total=0,a,b;
    for(a=0;a<n-1;a++){
        for(b=a+1;b<n;b++){
            if(colors[a].first==colors[b].second){++total;}
            if(colors[a].second==colors[b].first){++total;}
        }
    }
    cout<<total;
    return 0;
}
