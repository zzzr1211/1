#include <stdio.h>
int a[1000010]={};
int main ()
{
    int n,m,p,k,predict,count=0;
    scanf("%d%d%d",&n,&m,&p);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&k);
        for (int j = 0; j < k; j++)
        {
            scanf("%d",&predict);
            a[predict-1]++;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        if (a[i]==p)
        {
            count++;
        }
    }
    printf("%d\n",count);
    for (int i = 0; i < m; i++)
    {
        if (a[i]==p)
        {
            printf("%d ",i+1);
        }
    }
    
}