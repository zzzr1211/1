#include <stdio.h>
int main ()
{
    int n,a[100],count=0,b[100]={0};
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {   
        int swap=0;
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
                swap=1;
            }
            
        }
        if (swap==0)
        {
            break;
        }
        
    }

    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (a[k]==a[j]+a[i])
                {
                    b[k]=1;
                    break;
                }else if (a[k]>a[j]+a[i])
                {
                    break;
                }
                
                
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (b[i]==1)
        {
            count++;
        }
        
    }
    
    printf("%d",count);
    
}