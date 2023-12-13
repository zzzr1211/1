#include <stdio.h>
int main ()
{
    int n;
    double s=0,h=100;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        s+=h;
        h/=2;
    }
    printf("%.4lf %.4lf",s,h);
}