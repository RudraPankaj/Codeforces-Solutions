//***// Author  : RudraPK
//***// Problem : 443 A (Anton and Letters) - Codeforces
//***// Student : Department of CSE, Premier University
//***// Date    : 28/11/2022

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    string str;
    getline(cin, str);
    int len = str.length();
    int abcd[26]={0};
    int dLetter=0;
    for(int ii=0; ii<len; ii++){
        if(str[ii]>=97 && str[ii]<=122){
            if(abcd[str[ii]-97] == 0)
                abcd[str[ii]-97]++;
        }
    }

    for(int i=0; i<26; i++){
        dLetter+=abcd[i];
    }
    cout << dLetter << nl;
}
