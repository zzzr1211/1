#include <stdio.h>

int main ()

{
    int a,b,c,N;

    scanf("%d %d %d",&a,&b,&c);

    N=((a-1)/c+1)*((b-1)/c+1);

    printf("%d",N);

    return 0;
}