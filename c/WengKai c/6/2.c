#include <stdio.h>
int main()
{
    int N,a,b,c,sum1,sum;
    scanf("%d",&N);
    a=1;
    
    sum=0;

    for (int d = 0; d < N-1; d++)
    {
        a*=10;
    }

    for (int i = a; i < a*10; i++)
    {
        b=i;
        int sum=0;
        for ( ; b>0; )
        {
            c=b%10;
            b/=10;
            sum1=1;
            for (int e = 0; e < N; e++)
            {
                    sum1*=c;    
            }
            sum+=sum1;
        }
        
        if (sum==i)
        {
            printf("%d\n",i);
        }
    }
    
    
    

    return 0;
}