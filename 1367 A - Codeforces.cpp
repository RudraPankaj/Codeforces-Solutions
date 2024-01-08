#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        vector <char> a;
        string b;
        cin >> b;
        int sizeOfb = b.length();

        a.push_back(b[0]);
        for(int i=1; i< sizeOfb-1; i+=2)
        {
            a.push_back(b[i]);
        }
        a.push_back(b[sizeOfb-1]);

        for(auto elem : a) cout << elem;
        cout << nl;
    }


    return 0;
}
