#include <stdio.h>
#include <math.h>
int main ()
{
    int n,t,lamp[20001]={0};
    double a,max=0;
    scanf("%ld",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf %d",&a,&t);
        for (int j = 1; j <=t; j++)
        {
            lamp[(long long)(j*a)]++;
            if (j*a>max)
            {
                max=j*a;
            }
            
        }
        
    }
    
    for (long long i = 1; i <=max; i++)
    {
        if (lamp[i]%2!=0)
        {
            printf("%d",i);
            break;
        }
        
    }
    return 0;
}