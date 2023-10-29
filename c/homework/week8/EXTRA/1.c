#include <stdio.h>

int main ()
{
    unsigned int a,b,min;
    min=0;
    scanf("%d %d",&a,&b);
    if (a<b)
    {
        min=a;
    }else min=b;


    printf("%d",min);

    return 0;
}