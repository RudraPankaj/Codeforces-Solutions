#include <iostream>
#include <cctype>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int i;

    for(i=0; str1[i]!='\0'; i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);

        if(str1[i] < str2[i])
        {
            cout << "-1\n";
            break;
        }
        else if(str1[i] > str2[i])
        {
            cout << "1\n";
            break;
        }
        else
            continue;
    }

    if(str1[i]=='\0') cout << "0\n";
}
