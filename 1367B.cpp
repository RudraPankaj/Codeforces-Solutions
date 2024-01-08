#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t, i, j, temp;
    cin >> t;

    while(t--)
    {
        cin >> n;
        int arr[n];
        int cnt=0;

        arr[0] = 0;
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        if(n>1)
        {
            for(i=0; i<n-1; i++)
            {
                if( (i%2) != (arr[i]%2) )
                {
                    for(j=i+1; j<n; j++)
                    {
                        if( (arr[j]%2) == (i%2) )
                        {
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                            cnt++;
                        }
                    }
                }
            }
        }

        if( n==1 && (arr[0]%2) )
            cout << "-1\n";
        else
            cout << cnt << "\n";
    }
}
