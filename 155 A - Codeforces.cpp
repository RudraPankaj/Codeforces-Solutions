//**** // Author  : RudraPK
//*   *// Problem : 155 A (I_love_\%username\%) - Codeforces
//**** // Student : Department of CSE, Premier University
//*    // Date    : 29/11/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int n, more, lesss, m=0, l=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i==0){
            more = arr[i];
            lesss = arr[i];
        }
        else {
            if(arr[i]>more) {
                more = arr[i];
                m++;
            }
            else if(arr[i]<lesss) {
                lesss = arr[i];
                l++;
            }
        }
    }

    if(n>1) cout << m+l << nl;
    else cout << 0 << nl;
}
