#include <stdio.h>

int main ()
{
    long long n,p,k,res=0;
    scanf("%lld%lld%lld",&n,&p,&k);
    k=k%n;
    for (long long i = 0; i < k; i++)
    {
        res+=p;
        
    }
    res=res%n;
    printf("%lld",res);
}