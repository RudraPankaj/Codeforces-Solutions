#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2;
    long long int n1=0, n2=0;
    cin >> str1 >> str2;
    for(int i=0; i<=str1.length(); i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
        n1 += str1[i];
        n2 += str2[i];
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(n1==n2)
        cout << 0 << "\n";
    else if(n1 < n2)
        cout << -1 << "\n";
    else
        cout << 1 << "\n";
}
