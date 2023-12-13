#include <stdio.h>
int main ()
{
    int t,n,sum,count,a[60];
    double average;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&n);
        sum=0;

        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        average=sum*1.0/n;
        count=0;
        for (int j = 0; j < n; j++)
        {
            if (a[j]<average)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    
}