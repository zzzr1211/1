#include <stdio.h>

int main ()
{
    long long a;
    scanf("%ld",&a);
    int n=0;
    long long b=a;
    while (b>0)
    {
        b/=10;
        n+=1;
    }
    // printf("%d",n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a%10;
        a/=10;
    }
    printf("%d",sum);
}