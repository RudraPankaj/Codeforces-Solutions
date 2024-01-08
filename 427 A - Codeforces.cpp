//***// Author  : RudraPK
//***// Problem :
//***// Student : Department of CSE, Premier University
//***// Date    :

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int n, event, unTreated=0;
    cin >> n;
    int hired=0;
    while(n--){
        cin >> event;

        if(event>0){
            hired += event;
        }
        else if(event== -1){
            if(hired>0) hired--;
            else unTreated++;
        }
    }
    cout << unTreated << nl;
}
