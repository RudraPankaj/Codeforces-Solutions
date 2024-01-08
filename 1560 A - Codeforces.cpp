#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    int x3arr[1001]={0};

    for(int i=1,num=1; i<=1000; num++){
        if(num%10 != 3 && num%3 != 0){
            x3arr[i] = num;
            i++;
        }
    }

    ttt{
        int k;
        cin >> k;
        cout << x3arr[k] << nl;
    }

    return 0;
}
