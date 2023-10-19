#include <stdio.h>

int main ()
{
    int a,b,c,m;

    scanf("%d %d %d",&a,&b,&c);

    m=c+(a+b-c)/3;

    printf("%d",m);
    return 0;
}