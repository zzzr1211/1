#include <stdio.h>
int main()
{
    long long n,k,res;
    scanf("%ld%ld",&n,&k);
    res=n;
    while (n>=k)
    {
        res+=n/k;
        n=n%k+n/k;
    }
    printf("%lld",res);
}