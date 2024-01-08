#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        int n;
        cin >> n;
        int Arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> Arr[i];
        }
        sort(Arr, Arr+n);

        bool flag=1;
		for(int i=1; i<n; i++)
		{
			if(Arr[i]-Arr[i-1] > 1) flag=0;
		}

		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
    }

    return 0;
}
