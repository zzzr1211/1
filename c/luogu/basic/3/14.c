#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    double a[1000]={1,1};

    for (int i = 2; i < n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    
    printf("%.2lf",a[n-1]);

}