 #include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)

int main()
{
    fast;

    ttt
    {
        string sNum;
        cin >> sNum;

        int digs = sNum.length();
        int k=0, sup=0;
        vector<int> A;

        for(int i=digs-1; i>0; i--){
            if(sNum[i]!='0'){
                k++;
                int d = sNum[i]-48;
                int X = d*round(pow(10, sup));
                A.push_back(X);
            }
            sup++;
        }
        A.push_back((sNum[0]-48)*round(pow(10, digs-1)));
        k++;
        cout << A.size() << nl;

        for(int i=0; i<k-1; i++) cout << A[i] << " ";
        cout << A[k-1] << nl;
    }

    return 0;
}

