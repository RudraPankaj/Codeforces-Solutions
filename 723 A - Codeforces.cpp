//**** // Author  : RudraPK
//*   *// Problem : 723A - The New Year: Meeting Friends
//**** // Student : Department of CSE, Premier University
//*    // Date    : 3/12/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b&&b>c) cout << (a-b)+(b-c) << nl;
    else if(b>c&&c>a) cout << (b-c)+(c-a) << nl;
    else if(c>a&&a>b) cout << (c-a)+(a-b) << nl;
    else if(c>b&&b>a) cout << (c-b)+(b-a) << nl;
    else if(b>a&&a>c) cout << (b-a)+(a-c) << nl;
    else cout << (a-c)+(c-b) << nl;

    return 0;
}
