#include <stdio.h>
int main ()
{
    double s,swim=2.0,x=0;
    scanf("%lf",&s);
    int count=0;

    while (x<s)
    {
        count++;
        x+=swim;
        swim*=0.98;
    }

    printf("%d",count);
       
}