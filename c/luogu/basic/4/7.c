#include <stdio.h>
int main ()
{
    int n,lottery[7],a[7],res[8]={0};
    scanf("%d",&n);
    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&lottery[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < 7; k++)
        {
            scanf("%d",&a[k]);
        }
        int count=0;
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                if (lottery[j]==a[k])
                {
                    count++;
                }
                
            }
            
            
        }
        res[count]++;
    }
    
    for (int i = 7; i > 0; i--)
    {
        printf("%d ",res[i]);
    }
    
}