#include <stdio.h>
int main ()
{
    int a,b,N,S;

    scanf("%d",&N);

    a=(int)(N/4);
    b=N/2-a;

    S=a*b;

    printf("%d",S);

    return 0;

}