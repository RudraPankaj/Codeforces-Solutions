#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int n;
    bool hard = false;
    int arr[100];
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]==1)
            hard = true;
    }

    if(hard==1)
        cout << "HARD\n";
    else
        cout << "EASY\n";

    return 0;
}
