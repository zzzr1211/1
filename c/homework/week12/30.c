#include <stdio.h>
int main ()
{
    int n,a[1001]={0},m,b[101];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i<m; i++)
    {
        for (int j = n-1; j >=0; j--)
        {
            if (b[i]==a[j])
            {
                for (int k = j; k < n; k++)
                {
                    a[k]=a[k+1];
                }
                break;
            }
            
        }
        
    }
    if (a[0!=0])
    {
        printf("%d",a[0]);
    }
    for (int i = 1;a[i]!=0; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}