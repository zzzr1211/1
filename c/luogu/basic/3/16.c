#include <stdio.h>
int main ()
{
    int n,count=1,max=1;
    scanf("%d",&n);
    long long a[1005]={0};
    for (int i = 0; i < n; i++)
    {
        scanf("%ld",&a[i]);
    }
    
    for (int i = 1; i < n; i++)
    {
        if(a[i]-1==a[i-1])
        {
           count++;
        }

        if (a[i]-1!=a[i-1]||i==n-1)
        {
            if (count>max)
            {
                max=count;
                count=1;
            }
            
        }
    }
    
    printf("%d",max);
}