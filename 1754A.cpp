#include <iostream>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    fast;
    int t, n, Q, A;
    cin >> t;
    char ch;

    while (t--)
    {
        Q=0, A=0, n=0;
        char seq[100];
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin >> seq[i];
            ch = seq[i];
            if (ch == 'Q')
                Q++;
            else if (ch == 'A')
                A++;
        }

        if (A >= Q)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
