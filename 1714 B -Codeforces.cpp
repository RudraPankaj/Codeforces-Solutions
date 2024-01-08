#include <iostream>
#include <vector>
using namespace std;

#define ll long long int
#define nl "\n"

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n=0, passed=0;
        cin >> n;
        int a[n+5];
        int chk[n+5]= {0};

        for(int i=1; i<=n; i++)
            cin >> a[i];

        for(int i=n; i>=1; i--)
        {
            if(chk[a[i]] == 0)
            {
                passed++;
                chk[a[i]]++;
            }
            else break;
        }
        cout << n-passed << nl;
    }
}





/* inputs :
5
4
3 1 4 3
5
1 1 1 1 1
1
1
6
6 5 4 3 2 1
7
1 2 1 7 1 2 1
*/
