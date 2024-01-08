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

    int n, a, b, room=0;
    cin >> n;

    while(n--){
        cin >> a >> b;
        if((b-a)>=2)
            room++;
    }

    cout << room << nl;
}
