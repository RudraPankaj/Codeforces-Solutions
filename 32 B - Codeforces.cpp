#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    string code;
    vector <char> result;
    cin >> code;
    int sz = code.length();
    for(int i=0; i<sz; ++i){
        if(code[i] == '-' && code[i+1] == '.'){
            result.push_back('1');
            ++i;
        }
        else if(code[i] == '-' && code[i+1] == '-'){
            result.push_back('2');
            ++i;
        }
        else if(code[i] == '.'){
            result.push_back('0');
        }
    }

    for(auto elem : result) cout << elem;
    cout << nl;

    return 0;
}
