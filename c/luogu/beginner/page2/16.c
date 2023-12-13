#include <stdio.h>

long long setGroup(long long n,long long k)
{
    if(n-k>0&&(n-k)%2==0) return setGroup((n-k)/2,k)+setGroup((n+k)/2,k);
    else return 1;
}

int main ()
{
    long long n,k;
    scanf("%ld%ld",&n,&k);
    printf("%lld",setGroup(n,k));
}