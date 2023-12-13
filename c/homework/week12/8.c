#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    long long a[1000]={0};
    for (int i = 0; i < n; i++)
    {
        scanf("%ld",&a[i]);
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

    printf("%ld",a[(n-1)/2]);
    
}