#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;

    int cnt=0;
    int lt[26] = {0};
    bool milgaya=false;

    string s;
    cin >> s;

    int n = s.length();
    cout << n << nl;

    for(int i=0; i<n; i++)
    {
        lt[s[i]-97]++;
    }

ret:
    for(int i=0; i<26; i++)
    {
        if(lt[i]>0)
        {
            lt[i]--;
            milgaya=true;
        }
    }
    if(milgaya==false) return 0;
    else
    {
        cnt++;
        goto ret;
    }

    cout << cnt;
}
