#include <stdio.h>

int main ()
{
    int m=10;
    int a[m];
    int b;

    for (int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m-1; j++)
        {
            if (a[j]>a[j+1])
            {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
            
        }
        
    }
    
    for (int i = 1; i < m; i++)
    {
        if (a[0]==0)
        {
            a[0]=a[i];
            a[i]=0;
            break;
        }
        
    }
    
    
    
    
    for (int i = 0; i < m; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
}