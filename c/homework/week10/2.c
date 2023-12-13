#include <stdio.h>
long long power(long long i,long long k);
#define C 114514
int main ()
{
    long long n,k,sum=0;
    scanf("%lld%lld",&n,&k);

    for (long long i = 1; i <=n; i++)
    {
        sum+=(long long)power(i,k)%C;
        sum=sum%C;
    }
    
    printf("%lld",sum);
}

long long power(long long x,long long k)
{
    long long res=1;
    for (int i = 0; i < k; i++)
    {
        res=res*x%114514;
    }
    return res;
}