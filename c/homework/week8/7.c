#include <stdio.h>

int main ()
{
    long long a;
    long long b;


    scanf("%ld",&a);

    b=a/100000%10;
    printf("%d",b);
    b=a/10000%10;
    printf("%d",b);
    b=a/1000%10;
    printf("%d",b);
    b=a/100%10;
    printf("%d",b);
    b=a/10%10;
    printf("%d",b);
    b=a/1%10;
    printf("%d",b);
    return 0;
}