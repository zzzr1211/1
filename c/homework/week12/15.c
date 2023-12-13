#include <stdio.h>
int main ()
{
    int m,n,sum,count,space=1;
    scanf("%d%d",&n,&m);
    int a[100]={2};
    for (int i = 1; i < n; i++)
    {
        a[i]=a[i-1]+2;
    }
    
    for (int i = 0; i < n; i+=m)
    {
        sum=0;
        count=0;
        for (int j = i; j < i+m&&j<n; j++)
        {
            sum+=a[j];
            count++;
        }
        if (space==0)
        {
            printf(" ");
        }
        printf("%d",sum/count);
        space=0;
        
    }
    
}