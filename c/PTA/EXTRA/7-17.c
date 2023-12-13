#include <stdio.h>
int main ()
{
    long long n,a,b;
    scanf("%ld%ld%ld",&n,&a,&b);
    long long  sum1=0,sum2=0;
    for (int i = 0; i < n; i++)
    {
        long long x,y,p;
        scanf("%ld%ld%ld",&x,&y,&p);

        if (y>a*x+b)
        {
            sum1+=p;
        }else if (y<a*x+b)
        {
            sum2+=p;
        }
        
        
    }
    
    if (sum1>sum2)
    {
        printf("_RiverLoong is richer.\n");
    }else if (sum2>sum1)
    {
        printf("Anani_leaf is richer.\n");
    }else printf("They are as rich as each other.\n");
    
    

    printf("%d %d",sum1,sum2);
}