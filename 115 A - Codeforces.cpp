#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int xx; cin >> xx; while(xx--)
#define FILLarr(a,n) for(int i=0; i<n; i++){cin>>a[i];}
#define FILLvec(a,n) for(int i=0; i<n; i++){long long int xxs; cin >> xxs; a.push_back(xxs);}
#define reversei(a) reverse(a.begin(), a.end());

vector<int> vec[2002];
int vset[2002];

int dfs(int a){
    int sol = 0;
    vset[a] = 1;
    for(int x : vec[a]){
        if(!vset[x])
            sol = max(sol, dfs(x));
    }
    return (sol+1);
}

void solve() {
    set<int> super;
    int n; cin >> n;
    for(int i=1; i<=n; i++){
        int t; cin>>t;
        if(t == -1)
            super.insert(i);
        else
            vec[t].push_back(i);
    }
    int z=0;
    for(int it : super){
        z = max(z, dfs(it));
    }
    cout << z;
}

int main()
{
    fast;
    solve();
    return 0;
}
