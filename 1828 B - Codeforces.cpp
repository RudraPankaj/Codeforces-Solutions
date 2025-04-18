#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        vector<int> distances;
        bool unsorted = false;
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            if (p[i] != i + 1) {
                distances.push_back(abs(i + 1 - p[i]));
                unsorted = true;
            }
        }

        if (!unsorted) {
            cout << n - 1 << endl;
            continue;
        }

        if (distances.empty()) {
            cout << n - 1 << endl;
        } else {
            int result_gcd = distances[0];
            for (size_t i = 1; i < distances.size(); ++i) {
                result_gcd = gcd(result_gcd, distances[i]);
            }
            cout << result_gcd << endl;
        }
    }
    return 0;
}
