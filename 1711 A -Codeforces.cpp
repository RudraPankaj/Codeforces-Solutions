#include <iostream>
using namespace std;

int main(){
    int t, n, i;
    cin >> t;

    while(t--)
    {
        cin >> n;

        if(n==1)
        {
            cout << 1 << "\n";
        }
        else
        {
            for(i=2; i<=n; i++)
            {
                cout << i << " ";
            }
            cout << 1 << "\n";
        }

    }
}
