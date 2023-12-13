#include <stdio.h>
int main ()
{
    int n,a[20010],temp,count=0;
    long long b;
    scanf("%d%ld",&n,&b);

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
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    
    for (int i = n-1; i >=0; i--)
    {
        if (b>0)
        {
            b-=a[i];
            count++;
        }else break;
    }
    
    printf("%d",count);
}