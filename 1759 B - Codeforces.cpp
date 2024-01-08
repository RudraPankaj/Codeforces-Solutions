#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int t;
    cin >> t;
    while(t--){
        int m, s, x, Sum=0, mSum=0;
        cin >> m >> s;
        int arr[m+s]={0};
        for(int i=1; i<=m; i++){
            cin >> x;
            arr[x] = x;
        }
        for(int i=1; ; i++){
            if(arr[i]==0){
                mSum += i;
                if(mSum == s) break;
                else if(mSum > s){
                    mSum -=i;
                    break;
                }
            }
        }
        if(mSum == s) cout << "YES\n";
        else cout << "NO\n";
    }
}
