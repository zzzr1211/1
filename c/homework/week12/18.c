#include <stdio.h>
int main ()
{
    int a[1000],b[1000],n,count1=0,count2=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i]>b[i])
        {
            count1++;
        }else if (b[i]>a[i])
        {
            count2++;
        }
        
        
    }
    
    if (count1>count2)
    {
        printf("Alice\n%d",count1);
    }else printf("Bob\n%d",count2);
    
}