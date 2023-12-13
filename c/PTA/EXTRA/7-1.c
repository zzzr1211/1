#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    double a=1,b=2;
    double sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=b/a;
        b=a+b;
        a=b-a;
        
    }
    printf("%.6lf",sum);
}