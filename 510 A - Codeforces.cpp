//***// Author  : RudraPK
//***// Problem : 510 A (Fox and Snake) - Codeforces
//***// Student : Department of CSE, Premier University
//***// Date    : 29/11/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int n, m, pos=0;
    cin >> n >> m;
    char arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i%2==0){
                arr[i][j] = '#';
            }
            else if(pos==0){
                if(j<m-1) arr[i][j] = '.';
                else {
                    arr[i][j] = '#';
                    pos = 1;
                }
            }
            else {
                if(j==0) arr[i][j] = '#';
                else arr[i][j] = '.';
                if(j==m-1) pos=0;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j];
        }
        cout << nl;
    }
}
