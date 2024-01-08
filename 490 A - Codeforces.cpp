#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;
    int n;
    cin >> n;

    if (n<3)
    {
        cout << 0 << nl;
        return 0;
    }

    stack<pair<int, int>> pairsPR;
    stack<pair<int, int>> pairsMT;
    stack<pair<int, int>> pairsPE;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        if(x==1) pairsPR.push(make_pair(x, i));
        else if(x==2) pairsMT.push(make_pair(x, i));
        else pairsPE.push(make_pair(x, i));
    }

    int sizePR = pairsPR.size();
    int sizeMT = pairsMT.size();
    int sizePE = pairsPE.size();

    int M_comp = (sizePR < sizeMT) ? ((sizePR<sizePE)?sizePR:sizePE):((sizeMT<sizePE)?sizeMT:sizePE);

    if(M_comp == 0)
    {
        cout << 0 << nl;
        return 0;
    }
    cout << M_comp << nl;

    for(int i=0; i<M_comp; i++)
    {
        if(!pairsPR.empty())
        {
            cout << pairsPR.top().second;
            pairsPR.pop();
        }
        if(!pairsMT.empty())
        {
            cout << " " << pairsMT.top().second;
            pairsMT.pop();
        }
        if(!pairsPE.empty())
        {
            cout << " " << pairsPE.top().second << nl;
            pairsPE.pop();
        }

    }
}
