#include <stdio.h>

int main ()
{
    long long a,b,c;
    scanf("%ld%ld%ld",&a,&b,&c);

    if (a==b)
    {
        printf("C");
    }else if (a==c)
    {
        printf("B");
    }else if (b==c)
    {
        printf("A");
    }
    
    return 0;
        
}