#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int current_l = 0, current_r = 0;
        int spread_cnt = 0;

        for (int day = 1; day <= m; day++) {
            if (current_l > l) {
                current_l--;
                spread_cnt++;
            }

            else if(current_r <= r) {
                current_r++;
                spread_cnt++;
            }

            if(spread_cnt == m) break;
        }

        cout << current_l << " " << current_r << endl;
    }

    return 0;
}
