#include <stdio.h>
int main ()
{
    long long n;
    scanf("%ld",&n);
    long long m;
    int i = 1;
    for (;; i++)
    {
        m=(i+1)*i/2;
        if (m>=n)
        {
            break;
        }
        
    }
    printf("%d",i);
}