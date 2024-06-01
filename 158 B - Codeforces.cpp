#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)
#define FILLarr(a,n) for(long long int i=0; i<n; i++){cin>>a[i];}
#define FILLvec(a,n) for(long long int i=0; i<n; i++){long long int xxs; cin >> xxs; a.push_back(xxs);}
#define reversei(a) reverse(a.begin(), a.end());

int main() {
    fast;

    int n;
    cin>>n;
    ll taxis=0;
    ll available_seats=4;
    int groups[n];
    ll groupsCnt[5]={0};

    for(long long int i=0; i<n; i++) {
        cin>>groups[i];
        switch(groups[i]){
        case 1:
            groupsCnt[1]++;
            break;
        case 2:
            groupsCnt[2]++;
            break;
        case 3:
            groupsCnt[3]++;
            break;
        case 4:
            groupsCnt[1]++;
            break;
        }
    }

    sort(groups, groups+n, greater<int>());

    for(ll i=0; i<n; i++){
        if(groups[i]<available_seats){
            available_seats -= groups[i];
            groupsCnt[groups[i]]--;
            if(groupsCnt[available_seats]>0){
                groupsCnt[available_seats]--;
                for(ll j=i; j<n; j++){
                    if(groups[j] == available_seats){
                        groups[j]=0;
                        break;
                    }
                }
                taxis++;
                available_seats=4;
            }
        }
        else{
            taxis++;
            available_seats=4;
        }
    }

    cout << taxis << nl;

    return 0;
}