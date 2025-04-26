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

        int n;
        cin >> n;
        int m;
        cin >> m;
        cin.ignore();

        vector<string> grid(n);
        int f_row = 0;
        int l_row = 0;
        int k = 0;
        bool first_hash_found = false;

        for (int i = 0; i < n; ++i) {
            getline(cin, grid[i]);
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '#') {
                    if (!first_hash_found) {
                        f_row = i + 1;
                        k = j + 1;
                        first_hash_found = true;
                    }
                    l_row = i + 1;
                }
            }
        }

        //cout << "[O] First row and Last row: " << f_row << "," << l_row << endl;

        if (!l_row) {
            //cout << "Last row is the first row!" << endl;
            l_row = f_row;
        }

        int h;
        if (f_row == l_row) {
            h = f_row;
        } else {
            h = (l_row+f_row)/2;
            //cout << "Last row is " << l_row << " and first row is " << f_row << " so : h = " << l_row << "+" << f_row << "/2" << " = " << h << endl;
        }

        cout << h << " " << k << endl;

    }

    return 0;
}
