#include <stdio.h>
long long max(long long a,long long b);
int main ()
{
    long long n,a1,a2,length=0;
    scanf("%ld",&n);
    scanf("%ld",&a1);
    for (int i = 1; i < n; i++)
    {
        scanf("%ld",&a2);
        length+=max(a1,a2);
        a1=a2;
    }
    printf("%ld",length);
    return 0;
}
long long max(long long a,long long b)
{
    if(a<b)return b;
    else return a;
}