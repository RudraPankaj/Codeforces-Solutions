#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int n, p, i, X, Y, z;
    cin >> n;
    int arr[n]={0};

    cin >> X;
    for(i=0; i<X; i++){
        cin >> z;
        arr[z-1] = 1;
    }
    cin >> Y;
    for(i=0; i<Y; i++){
        cin >> z;
        arr[z-1] = 1;
    }
    sort(arr, arr+n);
    (arr[0] == 1) ? cout << "I become the guy.\n" : cout << "Oh, my keyboard!\n";
}
