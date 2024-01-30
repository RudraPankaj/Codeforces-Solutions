#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define ull unsigned long long
#define ttt long int t; cin >> t; while(t--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

struct Triplet {
    pair<int, int> fpair;
    int value;

    Triplet(ll a, ll b, ll f) : fpair(a, b), value(f) {}
};

int main(){
    fastio;

    ttt{
        vector<Triplet> triplets;

        ll n, m, k, a, b, f, sum=0; // k = excursion count
        cin >> n >> m >> k;

        if(m==0) {
            cout << 0 << nl;
            continue;
        }

        // loop for each pair of friends
        for(int i=1; i<=m; i++){
            // friends pair and value input
            cin >> a >> b >> f;
            triplets.push_back(Triplet(a,b,f));
        }

        // find the sum result


        cout << sum << nl;
    }
}
