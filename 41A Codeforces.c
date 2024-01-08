#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[105], t[105], c[105];
    scanf("%s %s", s, t);
    strcpy(c,s);
    strrev(c);

    //printf("\n%s,%s\n", s, t);

    if(strcmp(c,t) == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
