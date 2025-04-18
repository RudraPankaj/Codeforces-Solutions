#include <iostream>
#include <stdio.h>
using namespace std;
char a[110],b[110];
int main(){
    int i;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='A'&&a[i]<='Z' )
            a[i]+=32;
        if(b[i]>='A'&&b[i]<='Z' )
                    b[i]+=32;
            if(a[i]>b[i]) {
                printf("1\n");
                break;
            }
            else if(a[i]<b[i]){
                printf("-1\n");
                break;
            }
            else continue;
    }
    if(a[i]=='\0')  printf("0\n");
    return 0;
}