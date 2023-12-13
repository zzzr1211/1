#include <stdio.h>
int main ()
{
    long long n,m,a[30000],sum,min=3000000;
    scanf("%ld %ld",&n,&m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n-m; i++)
    {
        sum=0;
        for (int j = i; j < i+m; j++)
        {
            sum+=a[j];
        }
        if (sum<min)
        {
            min=sum;
        }
        
    }
    
    printf("%ld",min);
}