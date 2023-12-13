#include <stdio.h>
int main ()
{
    int n,a[100000],count;
    long long sum,max=-1000;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum=0;
        count=0;
        for (int j = i;j<n; j++)
        {
            sum+=a[j];
            count++;

            if (sum>max&&count!=0)
            {
                max=sum;
            }
        }
    }
    printf("%ld",max);
}