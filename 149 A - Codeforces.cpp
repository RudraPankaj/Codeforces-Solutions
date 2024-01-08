#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)
#define FILLarr(a,n) for(int i=0; i<n; i++){cin>>a[i];toTcenti+=a[i];}
#define FILLvec(a,n) for(int i=0; i<n; i++){long long int xxs; cin >> xxs; a.push_back(xxs);}
#define reversei(a) reverse(a.begin(), a.end());

int main()
{
    fast;

        int k, centi=0, cnt=0, toTcenti=0;
        cin >> k;
        int arr[12];
        FILLarr(arr,12);
        sort(arr,arr+12);
        for(int i=11; i>=0; i--){
            if(centi<k){
                centi+=arr[i];
                cnt++;
            }
            else break;
        }
        if(toTcenti<k) cout << -1 << nl;
        else cout << cnt << nl;

    return 0;
}
