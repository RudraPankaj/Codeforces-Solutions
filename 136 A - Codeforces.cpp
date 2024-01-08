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
    cin >> n;
    int arr1[n+1] = {0};
    int arr2[n+1] = {0};

    for(int i=1; i<=n; i++){
        cin >>  arr1[i];
        arr2[arr1[i]] = i;
    }

    for(int i=1; i<n; i++){
        cout << arr2[i] << " ";
    }
    cout << arr2[n] << nl;

}
