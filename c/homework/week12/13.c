#include <stdio.h>
int main ()
{
    int n,m;
    scanf("%d",&n);
    int a[1000]={0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
        
    }
    scanf("%d",&m);
    printf("%d",a[n-1]);
    for (int i = 0; i < m-1; i++)
    {
        printf(" %d",a[n-2-i]);
    }
    
}