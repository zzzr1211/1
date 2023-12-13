#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int sum1=0,sum2=0;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i+=2)
    {
        sum1+=a[i];
    }
    for (int i = 1; i < n; i+=2)
    {
        sum2+=a[i];
    }
    
    
    printf("%d",sum1-sum2);
}