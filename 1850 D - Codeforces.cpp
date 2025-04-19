#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(nullptr);

int main() {
    fast;

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int max_len = 1, curr_len = 1;

        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] <= k) {
                curr_len++;
            } else {
                curr_len = 1;
            }
            max_len = max(max_len, curr_len);
        }

        cout << n - max_len << '\n';
    }

    return 0;
}
