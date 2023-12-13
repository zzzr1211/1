#include <stdio.h>
long long a[22222222];
int main ()
{
    long long n,m,s;    
    scanf("%ld%ld",&n,&m);
    
    for (int i = 1; i <=n; i++)
    {
        scanf("%ld",&a[i]);
    }
    for (int i = 1; i <=m; i++)
    {
        scanf("%ld",&s);
        printf("%lld",a[s]);
        if(i!=m)printf("\n");
    }
}