#include <stdio.h>


int main ()
{
    int t,n,q;
    int a[5001];
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d",&n);
        for (int j = 1; j <= n; j++)
        {
            a[j] = j;
        }
        
        while (n>3)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j%2!=0)
                {
                    a[j-j/2]=a[j];
                }
                
            }
            n-=n/2;
            if (n<=3)break;
            for (int j = 1; j <= n; j++)
            {
                if (j%3!=0)
                {
                    a[j-j/3]=a[j];
                }
                
            }           
            n-=n/3;
        }
        printf("%d",a[1]);
        for (int i = 2; i <=n; i++)
        {
            printf(" %d",a[i]);
        }
        printf("\n");
    }
    
}