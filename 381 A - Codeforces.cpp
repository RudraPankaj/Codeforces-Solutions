
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;

    int n, Sereja=0, Dima=0;
    bool mo = true;
    cin >> n;
    vector <int> cards;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        cards.push_back(x);
    }

    while(n!=0){
        if(mo && cards[0]>=cards[n-1]){
            Sereja+=cards[0];
            cards.erase(cards.begin());
            --n;
            mo=false;
        }
        else if(mo){
            Sereja+=cards[n-1];
            cards.erase(cards.begin()+(n-1));
            --n;
            mo=false;
        }

        else if(!mo && cards[0]>=cards[n-1]){
            Dima+=cards[0];
            cards.erase(cards.begin());
            --n;
            mo=true;
        }
        else if(!mo){
            Dima+=cards[n-1];
            cards.erase(cards.begin()+(n-1));
            --n;
            mo=true;
        }
        //cout << "n=" << n << nl;
    }

    cout << Sereja << " " << Dima << nl;

    return 0;
}
