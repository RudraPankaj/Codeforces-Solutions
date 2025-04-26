#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1), prefix(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        while (q--) {
            int l, r;
            ll k;
            cin >> l >> r >> k;

            ll old_sum = prefix[n];
            ll sub_sum = prefix[r] - prefix[l - 1];
            ll new_sum = old_sum - sub_sum + (r - l + 1) * k;

            if (new_sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
