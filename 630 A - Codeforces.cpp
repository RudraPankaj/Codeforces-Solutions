#include <iostream>

int modularExponentiation(int base, int power, int mod) {
    int result = 1;
    base %= mod;

    while (power > 0) {
        if (power & 1) {
            result = (result * base) % mod;
        }

        base = (base * base) % mod;
        power >>= 1;
    }

    return result;
}

int main() {
    const int MOD = 100;
    int power;
    std::cin >> power;

    int result = modularExponentiation(5, power, MOD);
    std::cout << result << std::endl;

    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//#define ll long long int
//#define nl "\n"
//#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
//
//int main()
//{
//    fast;
//
//    ll n;
//    cin >> n;
//    cout << 25 << nl;
//
//    return 0;
//}
