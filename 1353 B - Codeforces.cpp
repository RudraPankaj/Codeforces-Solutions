#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        int n,k, ans=0;
        cin >> n >> k;
        int a[n]={0};
        int b[n]={0};

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);


        if(a[0] < b[n-1])
        {
            for(int i=0,j=n-1; i<n && k>0; i++,j--,k--)
            {
                if(a[i] >= b[j]) break;
                int tmp=a[i];
                a[i]=b[j];
//                b[j]=tmp;
            }
        }

//        cout << nl;
//        for(int i=0; i<n; i++) cout << a[i] << ",";
//        cout << nl;
//        for(int i=0; i<n; i++) cout << b[i] << ",";
//        cout << nl;

        for(int i=0; i<n; i++) ans+=a[i];

        cout << ans << nl;
    }

    return 0;
}
