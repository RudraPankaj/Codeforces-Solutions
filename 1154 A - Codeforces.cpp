//**** // Author  : RudraPK
//*   *// Problem : 1154 A - Restoring Three Numbers
//**** // Student : Department of CSE, Premier University
//*    // Date    : 3/12/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    long int arr[4]={0};
    for(int i=0; i<4; i++){
        cin >> arr[i];
    }
    sort(arr, arr+4);
    cout << arr[3]-arr[0] << " " << arr[3]-arr[1] << " " << arr[3]-arr[2] << nl;
}
