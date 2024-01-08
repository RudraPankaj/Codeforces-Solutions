#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

struct comp {
    bool operator() (int const &i, int const &j) const {
        return i > j;
    }
};

int main()
{
    fast;

    int n, total=0, totalRev=0, coins=0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
        total += arr[i];
    }
    // cout << "Total=" << total << nl;
    int half = total/2;

    int l = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+l, greater<int>());

    for(int i=0; i<n; i++){
        totalRev += arr[i];
        coins++;
        //cout << "totalRev=" << totalRev << ", coins=" << coins << nl;
        if(totalRev > half){
            break;
        }
    }

    cout << coins << nl;
}
