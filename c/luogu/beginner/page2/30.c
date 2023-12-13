#include <stdio.h>
void count(long long n,long long a[])
{
    while (n>0)
    {
        a[n%10]++;
        n/=10;
    }
}
int main ()
{
    long long l,r;
    long long a[10]={};
    scanf("%ld%ld",&l,&r);

    for (long long i = l; i <= r; i++)
        count(i,a);
    
    printf("%d",a[2]);
}