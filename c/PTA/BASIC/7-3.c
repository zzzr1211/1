#include <stdio.h>

int main ()
{
    int a;
    scanf("%d",&a);
    printf("%d",a/100+a/10%10*10+a%10*100);
}