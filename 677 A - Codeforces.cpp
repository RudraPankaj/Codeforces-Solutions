#include <iostream>
using namespace std;

#define nl "\n"

int main()
{
    int n, h, width=0, i;
    cin >> n >> h;
    int a;

    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a<=h)
            width++;
        else if(a<=2*h)
            width+=2;
    }

    cout << width << nl;
}
