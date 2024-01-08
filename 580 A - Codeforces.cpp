#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int n, x, inc=1, last=1;
    cin >> n;
    ll arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){
        if(arr[i] >= arr[i-1]){
            inc++;
            if(inc>last) last = inc;
        }
        else{
            inc = 1;
        }
    }

    cout << last << nl;
}
