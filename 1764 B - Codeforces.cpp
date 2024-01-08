#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int gcd(int a, int b)
{
    if(a==0) return b;
    return gcd(b%a, a);
}

int GCDres(int a[], int n)
{
    int result = a[0];
    for(int i=1; i<n; i++)
        result = gcd(a[i], result);
    return result;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];

        cout << arr[n-1]/(GCDres(arr,n)) << nl;
    }

}
