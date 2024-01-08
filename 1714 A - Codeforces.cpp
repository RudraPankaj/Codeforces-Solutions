#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int t, n, H, M, h, m, totM;
    cin >> t;

    while(t--){
        cin >> n >> H >> M;
        totM = H*60+M;
        int alarm[n]={0};
        for(int i=0; i<n; i++){
            cin >> h >> m;
            int x = (h*60+m);
            if(x>totM)
                alarm[i]=x-totM;
            else if(x<totM)
                alarm[i]=1440-(totM-x);
        }
        sort(alarm, alarm+n);
        int final=alarm[0];
        cout << final/60 << " " << final%60 << nl;
    }
}
