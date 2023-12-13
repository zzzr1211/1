#include <stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    long long sum=0;
    for (int i = 1; i < x; i++)
    {
        if (x%i==0)
        {
            sum+=i;
        }
        
    }
    if (sum==x)
    {
        printf("%d YES",sum);
    }else printf("%d NO",sum);
    
}