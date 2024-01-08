
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ttt int t; cin >> t; while(t--)
#define FILLarr(a,n) for(int i=0; i<n; i++){cin>>a[i];}
#define FILLvec(a,n) for(int i=0; i<n; i++){long long int xxs; cin >> xxs; a.push_back(xxs);}
#define reversei(a) reverse(a.begin(), a.end());

int main()
{
    fast;

    int n,m;
	char a;
	bool ok = false;
	cin >> n >> m;
	int pixel = n * m;
	while(pixel--){
		cin >> a;
		if(a == 'C' || a == 'M' || a == 'Y'){
			ok = true;
		}
	}
	if(ok == true){
		cout << "#Color";
	}
	else{
		cout << "#Black&White";
	}

    return 0;
}
