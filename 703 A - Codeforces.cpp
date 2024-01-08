#include <bits/stdc++.h>
using namespace std;

#define i02n for(int i=0; i<n; i++)
#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n, m, c, mishka=0, chris=0;
    cin >> n;
    while(n--){
        cin >> m >> c;
        if(m>c) mishka++;
        if(c>m) chris++;
    }
    if(mishka>chris) cout << "Mishka\n";
    else if(mishka<chris) cout << "Chris\n";
    else cout << "Friendship is magic!\^\^";
}
