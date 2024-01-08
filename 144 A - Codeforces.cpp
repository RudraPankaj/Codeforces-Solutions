#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;


    int n, miniN=100, maxiN=1, mini, maxi, res;
    bool same = true;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>0 && same==true)
        {
            if(a[i]!=a[i-1]) same=false;
        }
        if(a[i]<=miniN){
            mini = i;
            miniN = a[i];
        }
    }
    for(int i=n-1; i>=0; i--){
        if(a[i]>=maxiN){
            maxi = i;
            maxiN = a[i];
        }
    }

    //cout << "min-" << mini << " ,max-" << maxi << nl;
    if(same) res = 0;
    else if(maxi < mini) res=(n-(mini+1))+maxi;
    else if(maxi > mini) res=(n-(mini+1))+maxi-1;

    cout << res << nl;


    return 0;
}
