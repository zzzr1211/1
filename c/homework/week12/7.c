#include <stdio.h>
int main ()
{
    int n,a[100],b[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        b[i]=i;
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];

                b[j]=b[j]+b[j+1];
                b[j+1]=b[j]-b[j+1];
                b[j]=b[j]-b[j+1];
            }
            
        }
        
    }
    printf("%d",b[0]+1);
    for (int i = 1; i < n; i++)
    {
        printf(" %d",b[i]+1);
    }
    
    
}