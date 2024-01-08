#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

char RplcPrnt(char x, char shift)
{
    string KB="qwertyuiopasdfghjkl;zxcvbnm,./";
    int i=0;
    if(shift == 'L')
    {
        for(i=0; i<29; i++)
        {
            if(x == KB[i])
            {
                ++i;
                return KB[i];
            }
        }
    }
    else
    {
        for(i=0; i<30; i++)
        {
            if(x == KB[i])
            {
                --i;
                return KB[i];
            }
        }
    }
}

int main()
{
    fast;
    string S;
    char shift;
    cin >> shift >> S;
    for(int i=0; i<S.length(); i++)
    {
        cout << RplcPrnt(S[i], shift);
    }

    return 0;
}
