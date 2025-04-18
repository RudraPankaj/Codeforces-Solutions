#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int nn = 2 * n;

        vector<vector<int>> p(2, vector<int>(nn + 1, 0));
        for (int i = 1; i <= nn; ++i) {
            p[0][i] = i;
        }

        vector<vector<int>> grid(n, vector<int>(n));
        unordered_set<int> seen_in_grid;
        vector<int> unique_in_order;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int x;
                cin >> x;
                grid[i][j] = x;
                if (seen_in_grid.find(x) == seen_in_grid.end()) {
                    seen_in_grid.insert(x);
                    unique_in_order.push_back(x);
                }
            }
        }

        vector<int> not_found;
        for (int i = 1; i <= nn; ++i) {
            if (seen_in_grid.find(i) == seen_in_grid.end()) {
                not_found.push_back(p[0][i]);
            }
        }
        sort(not_found.begin(), not_found.end());

        for (int i = 0; i < not_found.size(); ++i) {
            cout << (i == 0 ? "" : " ") << not_found[i];
        }

        for (int i = 0; i < unique_in_order.size(); ++i) {
            cout << (not_found.empty() && i == 0 ? "" : " ") << unique_in_order[i];
        }
        cout << endl;
    }
    return 0;
}
