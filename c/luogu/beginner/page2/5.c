#include <stdio.h>
#include <string.h>
int main ()
{
    char a[40],b[40];
    scanf("%s%s",a,b);
    if(strcmp(a,b)>0)printf(">");
    else if(strcmp(a,b)<0)printf("<");
    else printf("=");
}