#include <stdio.h>

int main ()
{
    long a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);
    printf("%ld",(a*24*60+b*60+c)*10);
    return 0;
}