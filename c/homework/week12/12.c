#include <stdio.h>
int main ()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[1000]={0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
        
    }

    for (int i = 1; i < n-1; i++)
    {
        sum+=a[i];
    }
    
    printf("%.2lf",sum*1.0/(n-2));
}