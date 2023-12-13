#include <stdio.h>
int main ()
{
    int a[100001],b;
    long long n;
    scanf("%ld",&n);
    for (long long i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for (long long i = 0; i < n; i++)
    {
        if (b<=a[i])
        {
            for (long long j = n-1; j >=i; j--)
            {
                a[j+1]=a[j];
            }
            a[i]=b;
            break;
        }
        
    }
    


    printf("%d",a[0]);
    for (long long i = 1; i < n+1; i++)
    {
        printf(" %d",a[i]);
    }
    
}