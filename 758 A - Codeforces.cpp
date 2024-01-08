#include <bits/stdc++.h>
using namespace std;

#define i02n for(int i=0; i<n; i++)
#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n, sum=0;
    cin >> n;
    int a[n];
    i02n{
        cin >> a[i];
    }
    sort(a, a+n);
    int mx=a[n-1];
    i02n{
        sum+=(mx-a[i]);
    }
    cout << sum << nl;
}
