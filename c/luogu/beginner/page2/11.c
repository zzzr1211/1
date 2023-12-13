#include <stdio.h>
#include <math.h>
int main ()
{
    int n,prime[5000]={2},isPrime,i,j,exit;
    scanf("%d",&n);
    for (i = 3,j = 0; i <= n; i++)
    {
        isPrime=1;
        for (int k = 2; k <= sqrt(i); k++)
        {
            if(i%k==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)prime[++j]=i;
    }
    
    for ( i = 4; i <= n ; i+=2)
    {
        exit=0;
        for (int x = 0; prime[x] < i; x++)
        {
            for (int y = 0; prime[y]+prime[x] <= i; y++)
            {
                if(prime[x]+prime[y]==i)
                {
                    printf("%d=%d+%d\n",i,prime[x],prime[y]);
                    exit=1;break;
                }
            }
            if(exit)break;
        }
        
    }
    
}