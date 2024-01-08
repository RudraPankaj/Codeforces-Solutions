#include <iostream>
using namespace std;

int main() {
    int t,result;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        if(n==m && m==1) result=1;
        else if(n==m) {
            if(n%2==0) result=(m*n)-(m);
            else result=(m*n)-(m+1);
        }
        else if(m==1) result = n-1;
        else if(n==1) result = m-1;
        else result = (m-1)*(n-1);

        cout << result << endl;
    }

    return 0;
}
