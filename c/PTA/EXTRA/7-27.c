#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    int sum1=0,sum2=0;
    for (int i = 0; i < n; i++)
    {
        sum1+=a[i];
        sum2+=b[i];
    }
    
    printf("%.3lf",sum1*1.0/sum2);
}