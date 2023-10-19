#include <stdio.h>

int main ()
{
    int m1,s1;
    int m2,s2;
    int m,s,res;

    scanf("%d%d",&m1,&s1);
    scanf("%d%d",&m2,&s2);

    res=(m2-m1)*60+(s2-s1);

    m=res/60;
    s=res%60;

    printf("%.2d:%.2d",m,s);

}