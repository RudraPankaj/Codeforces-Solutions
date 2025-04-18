#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        if (s[i] == 1) {
            count1++;
        } else if (s[i] == 2) {
            count2++;
        } else if (s[i] == 3) {
            count3++;
        } else {
            count4++;
        }
    }

    int taxis = count4;

    taxis += count3;
    count1 = max(0, count1 - count3); // adding count1 group(s) with count4 group(s)

    taxis += count2 / 2;
    count2 %= 2;

    if (count2 == 1) {
        taxis++;
        count1 = max(0, count1 - 2);
    }

    taxis += ceil((double)count1 / 4.0);

    cout << taxis << endl;

    return 0;
}
