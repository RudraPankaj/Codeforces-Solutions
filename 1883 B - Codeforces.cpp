#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(nullptr);

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s; cin >> s;

        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        int odd_count = 0;
        for (auto [ch, count] : freq) {
            if (count % 2 != 0) odd_count++;
        }

        int remaining = n - k;
        int allowed_odds = remaining % 2;

        if ((odd_count - allowed_odds) <= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
