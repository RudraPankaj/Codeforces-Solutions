#include <bits/stdc++.h>
using namespace std;

#define i02n for(i=0; i<n; i++)
#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int t, n;
    cin >> t;
    while(t--){
        int i, srch;
        cin >> n;
        int arr[n], arr2[n];
        for(i=0; i<n; i++){
            cin >> arr[i];
            arr2[i] = arr[i];
        }
        sort(arr, arr+n);
        if(arr[0]!=arr[1]) srch = arr[0];
        else srch = arr[n-1];
        for(i=0; i<n; i++){
            if(arr2[i] == srch){
                cout << i+1 << nl;
                break;
            }
        }
    }
}
