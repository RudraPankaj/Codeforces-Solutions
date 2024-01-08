#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    string s;
    cin >> s;
    int i, con=0, len = s.length();

    for(i=0; i<len; i++)
    {
        if(s[i]=='h' && con==0)
            con++;
        else if(s[i]=='e' && con==1)
            con++;
        else if(s[i]=='l' && con>=2 && con<=3)
            con++;
        else if(s[i]=='o' && con==4)
            con++;
        if(con==5)
            break;

        //cout << i << " = " << con << "\n";
    }

    if(con==5)
        cout << "YES\n";
    else
        cout << "NO\n";
}
