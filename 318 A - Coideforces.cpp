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
    unsigned long long int k, n, i, indx=0, num;
    cin >> n >> k;

    for(i=1; i<=n; i+=2){
        indx++;
        num = i;
        if(indx==k)
            break;
        else if(i==(n-1)&&indx!=k)
            i=2;
        cout << "i=" << i << "\tindx=" << indx << "\tnum=" << num << nl;
    }

    cout << num << nl;
}
