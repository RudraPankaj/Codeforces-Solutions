#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    string yes = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    string str;
    int t, found;
    cin >> t;

    while(t--){
        cin >> str;
        if(yes.find(str) != std::string::npos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
