#include <stdio.h>
int main ()
{
    long long a1,a2,n,res=0,d;
    scanf("%lld%lld%lld",&a1,&a2,&n);
    d=a2-a1;
    res=(n-1)*d*n/2+n*a1;
    printf("%lld",res);
}