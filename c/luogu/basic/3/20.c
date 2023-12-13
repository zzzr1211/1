#include <stdio.h>
int main ()
{
    long long n;
    scanf("%ld",&n);
    n=n/52;

    int res=0;
    int k;
    int x;
    for (k = 1;k<=n/21; k++)
    {
        for (x = 0; x < 101; x++)
        {
            if (x*7+k*21==n)
            {
                res=1;
                break;
            }else if (x*7+k*21>n)
            {
                break;
            }           
        }
        if(res==1)break;
    }
    
    printf("%d\n",x);
    printf("%d\n",k);
}