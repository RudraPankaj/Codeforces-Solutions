#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    string s, t, x;
    cin >> s >> t;
    strcpy(x,s);
    strrev(x);

    if(strcmp(x,t) == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
