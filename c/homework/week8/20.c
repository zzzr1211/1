#include <stdio.h>

int main ()
{
    int a,b,res;
    scanf("%d %d",&a,&b);
    res=(a%100+b%100)%100;

    printf("%d",res);

    return 0;
}