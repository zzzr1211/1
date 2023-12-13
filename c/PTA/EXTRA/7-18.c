#include <stdio.h>
#include <math.h>
int main ()
{
    long long n;
    scanf("%ld",&n);
    int res=0;
    for (int i = 1; i<sqrt(n); i++)
    {
        if (n%i==0)
        {
            res++;
        }
        
    }
    res*=2;
    if (sqrt(n)==(int)sqrt(n))
    {
        res++;
    }
    
    printf("%d",res);
}