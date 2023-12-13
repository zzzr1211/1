#include <stdio.h>
int main ()
{
    long long h1,h2,m1,m2,s1,s2,v;
    long long n;
    scanf("%ld:%ld:%ld\n%ld:%ld:%ld\n%ld",&h1,&m1,&s1,&h2,&m2,&s2,&v);
    n=((h2-h1)*3600+(m2-m1)*60+s2-s1)*v;
    printf("%lld",n);
}