#include <stdio.h>
int main ()
{
    int a,b,h,m;
    scanf("%d%d",&a,&b);
    h=a/100;
    m=a%100;
    int t=h*60+m+b;
    printf("%d%02d",t/60,t%60);
    return 0;

}