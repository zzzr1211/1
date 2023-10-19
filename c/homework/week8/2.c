#include <stdio.h>

int main ()
{
    int a,b;
    b=0;
    scanf("%d",&a);

    b=a*(a-1)*(a-1)*(a-1);
    printf("%d",b);

    return 0;
}