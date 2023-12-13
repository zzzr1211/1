#include <stdio.h>
int main ()
{
    long long a=0,b=0,n,c;
    scanf("%lld",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&c);
        a+=c;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&c);
        b+=c;
    }
    printf("%lf",(a*3-b*2)*1.0/(a-b));
}