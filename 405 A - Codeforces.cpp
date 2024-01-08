#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int n;
    cin >> n;
    int a[n]={0};
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    for(int i=0; i<n-1; i++){
        cout << a[i] << " ";
    }

    cout << a[n-1] << nl;
}
