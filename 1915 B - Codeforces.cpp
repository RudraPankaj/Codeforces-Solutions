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

char findMissingCharacter(const std::vector<std::vector<char>>& grid) {
    int rowMask[3] = {0};
    int colMask[3] = {0};
    int missingRow = -1;
    int missingCol = -1;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (grid[i][j] == '?') {
                missingRow = i;
                missingCol = j;
            } else {
                int mask = 1 << (grid[i][j] - 'A');
                rowMask[i] |= mask;
                colMask[j] |= mask;
            }
        }
    }

    int rowBits = rowMask[missingRow];
    int colBits = colMask[missingCol];
    int missingBit = 7 ^ (rowBits | colBits);

    char missingCharacter = 'A' + __builtin_ctz(missingBit);

    return missingCharacter;
}

int main()
{
    fast;

    ttt{
        vector<vector<char>> grid(3, vector<char>(3));
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                std::cin >> grid[i][j];
            }
        }

        char missingChar = findMissingCharacter(grid);

        cout << missingChar << nl;
    }
}
