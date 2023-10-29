#include <stdio.h>

int main ()
{
    double n,res=1,a=1;
    scanf("%lf",&n);
    int i = 1;
    for (;a>n; i++)
    {
        a=a*i/(2*i+1);
        res+=a;
    }
    printf("%.6lf",res*2);
}