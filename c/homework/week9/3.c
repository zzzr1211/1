#include <stdio.h>

int  main ()
{
    double m,n;
    scanf("%lf%lf",&n,&m);
    if(n/(m+1)==(int)(n/(m+1))){
        printf("Second win");
    }else printf("First win");

    return 0;

}