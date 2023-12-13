#include <stdio.h>
int main ()
{
    int n,a[1000],count1=0,count2=0,max,throw=0;
    scanf("%d",&n);
    
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if (i%2==0)
        {
            count1+=a[i];
        }else{
            count2+=a[i];
            if (a[i]>max)
            {
                max=a[i];
                throw=i/2+1;
            }
            
        }
        
    }
    
    count2-=max;

    if (count1>count2)
    {
        printf("%d",throw);
    }else printf("RUN");
    
}