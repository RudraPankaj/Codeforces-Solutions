#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isprime(int N){
    int i;
    for(i=2; i<=(N/2); ++i){
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    fast;

    int n;
    cin >> n;
    int num1=0, num2=0;

    num2=n-1, num1=n-num2;
    while(isprime(num1) || isprime(num2)){
        num2-=1, num1=n-num2;
    }

    cout << num1 << " " << num2 << nl;

    return 0;
}
