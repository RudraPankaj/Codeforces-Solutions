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
        int n;
        char digit;
        string num;
        cin >> n >> digit >> num;

        if(digit == '0')
        {
            cout << num << digit << nl;
        }
        else if(n == 1)
        {
            if(num[0] >= digit)
            {
                cout << num[0] << digit << nl;
            }
            else
            {
                cout << digit << num[0] << nl;
            }
        }
        else
        {
            bool inserted = false;
            for(int i = 0; i < n; i++)
            {
                if(num[i] < digit)
                {
                    num.insert(i, 1, digit);
                    inserted = true;
                    break;
                }
            }
            if(!inserted)
            {
                num += digit;
            }
            cout << num << nl;
        }
    }

    return 0;
}
