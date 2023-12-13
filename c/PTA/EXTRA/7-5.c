#include <stdio.h>
int main ()
{
    double a,x,s=0;
    int count=0;
    scanf("%lf%lf",&a,&x);
    while (s<x)
    {
        s+=a;
        a=0.98*a;
        count++;
    }
    
    printf("%d",count);
}