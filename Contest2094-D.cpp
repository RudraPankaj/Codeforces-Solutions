#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        int i = 0, j = 0;
        bool possible = true;
        while (i < p.length()) {
            if (j >= s.length() || s[j] != p[i]) {
                possible = false;
                break;
            }
            int count_p = 1;
            while (i + 1 < p.length() && p[i + 1] == p[i]) {
                count_p++;
                i++;
            }
            int count_s = 0;
            while (j < s.length() && s[j] == p[i]) {
                count_s++;
                j++;
            }
            if (count_s < count_p || count_s > 2 * count_p) {
                possible = false;
                break;
            }
            i++;
        }
        if (possible && j == s.length()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
