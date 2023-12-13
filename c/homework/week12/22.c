#include <stdio.h>
int main ()
{
    int n,q,book[101],l,r,sum;
    scanf("%d%d",&n,&q);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&book[i]);
    }
    for (int i = 0; i < q; i++)
    {
        scanf("%d%d",&l,&r);
        sum=0;
        for (int j = l; j <=r; j++)
        {
            sum+=book[j];
        }
        printf("%d",sum);
        if (i<q-1)
        {
            printf("\n");
        }
        
    }
    
}