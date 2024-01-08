#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

bool comparePairs(const pair<int, int>& m, const pair<int, int>& p) {
    return m.first < p.first;
}

int main()
{
    fast;

    ttt{
        int n; cin >> n;
        vector<pair<int, int>> a;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            a.emplace_back(x,i);
        }

        sort(a.begin(), a.end(), comparePairs);

        for(int i=0; i<n; i++){

        }
    }

    return 0;
}
