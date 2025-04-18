#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

bool isValid(const vector<vector<int>>& grid, int n, int m, int row, int col, int value) {
    if (row > 0 && grid[row-1][col] == value) return false;
    if (row < n-1 && grid[row+1][col] == value) return false;
    if (col > 0 && grid[row][col-1] == value) return false;
    if (col < m-1 && grid[row][col+1] == value) return false;
    return true;
}

bool backtrack(vector<vector<int>>& grid, int n, int m, int k, vector<int>& usedCount, int occurrences, int row, int col) {
    if (row == n) return true;

    int nextRow = row, nextCol = col + 1;
    if (nextCol == m) {
        nextRow = row + 1;
        nextCol = 0;
    }

    for (int value = 1; value <= k; ++value) {
        if (usedCount[value] < occurrences && isValid(grid, n, m, row, col, value)) {
            grid[row][col] = value;
            usedCount[value]++;

            if (backtrack(grid, n, m, k, usedCount, occurrences, nextRow, nextCol))
                return true;

            grid[row][col] = 0;
            usedCount[value]--;
        }
    }
    return false;
}

vector<vector<int>> solveGridGreedy(int n, int m, int k) {
    vector<vector<int>> grid(n, vector<int>(m, 0));
    int occurrences = (n * m) / k;
    vector<int> usedCount(k + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int value = 1; value <= k; ++value) {
                if (usedCount[value] < occurrences && isValid(grid, n, m, i, j, value)) {
                    grid[i][j] = value;
                    usedCount[value]++;
                    break;
                }
            }
        }
    }
    return grid;
}

vector<vector<int>> solveGrid(int n, int m, int k) {
    vector<vector<int>> grid(n, vector<int>(m, 0));
    int occurrences = (n * m) / k;
    vector<int> usedCount(k + 1, 0);

    backtrack(grid, n, m, k, usedCount, occurrences, 0, 0);
    return grid;
}

int main() {
    fast;
    ttt {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> grid;
        if (n * m <= 100) {
            grid = solveGrid(n, m, k);
        } else {
            grid = solveGridGreedy(n, m, k);
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << grid[i][j] << (j == m-1 ? "" : " ");
            }
            cout << nl;
        }
    }
    return 0;
}
