//This code is contributed by Pankaj Rudra
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t--)
    {
        int n=8;
        string s[8];

        //taking each row input as string
        for(int i=0; i<n; i++)
        {
            cin >> s[i];
        }

        //taking an empty indicator character
        char c = '.';

        //checking a row if every column is R
        if(c == '.')
        {
            for(int i=0; i<n; i++)
            {
                if(count(s[i].begin(),s[i].end(),'R') == n){
                    c = 'R';
                    break;
                }
            }
        }

        //if the R stripe not found it will find for B stripe
        if(c == '.')
        {
            for(int i=0; i<n; i++)
            {
                bool flag = false; //assume flag as mismatch
                for(int j=n-1; j>=0; j--){
                    if(s[j][i] != 'B'){
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    c = 'B';
                    break;
                }
            }
        }
        cout << c << nl;
    }
}


/*
4
....B...
....B...
....B...
RRRRRRRR
....B...
....B...
....B...
....B...
RRRRRRRB
B......B
B......B
B......B
B......B
B......B
B......B
RRRRRRRB
RRRRRRBB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
........
........
........
RRRRRRRR
........
........
........
........
*/
