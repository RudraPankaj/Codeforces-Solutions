//**** // Author  : RudraPK
//*   *// Problem : 1669 B - Codeforces
//**** // Problem name : Triple
//*    // Student : Department of CSE, Premier University
//*    // Date    : 1/12/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        bool TripleFound = false;
        int Triple;
        int n;
        cin >> n;

        int Arr[n+5];
        int ArrCnt[n+5]={0};

        for(int i=1; i<=n; i++){
            cin >> Arr[i];
            ArrCnt[Arr[i]]++;
        }

        for(int i=1; i<=n; i++){
            if(ArrCnt[i]>=3){
                TripleFound = true;
                Triple = i;
                break;
            }
        }

        if(TripleFound) cout << Triple << nl;
        else cout << -1 << nl;
    }
}
