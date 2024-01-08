#include <iostream>
#include <algorithm>
using namespace std;

#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;

    int n;
    cin >> n;

    cout << "I hate";
    for(int i=2; i<=n; i++)
    {
        if(n>1)
        {
            if(i%2==0)
                cout << " that I love";
            else
                cout << " that I hate";
        }
    }
    cout << " it\n";
}
