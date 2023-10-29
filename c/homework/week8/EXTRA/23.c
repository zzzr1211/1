#include <stdio.h>
#include <math.h>
int main ()
{
    long long a;
    scanf("%ld",a);

    if ((long long)sqrt(a)==sqrt(a))
    {
        printf("Yes");
    }else printf("No");
    
}