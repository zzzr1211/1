#include <stdio.h>
int factorial(long long x);
int main ()
{
    int n,res;
    long long x;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%ld",&x);
        if (x<100)
        {
            res=factorial(x);
            printf("%d\n",res);
        }
    }
    
}

int factorial(long long x)
{
    int ret=1;
    for (long long i = 1; i <=x; i++)
    {
        ret=ret*(i%2018)%2018;
    }
    
    return ret;
}