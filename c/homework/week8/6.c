#include <stdio.h>

int main ()
{
    int h1,m1,s1;
    int h2,m2,s2;
    int res;

    scanf("%d%d%d",&h1,&m1,&s1);
    scanf("%d%d%d",&h2,&m2,&s2);

    res=(h2-h1)*3600+(m2-m1)*60+(s2-s1);

    printf("%d",res);

    return 0;


}