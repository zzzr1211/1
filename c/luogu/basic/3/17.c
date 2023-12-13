#include <stdio.h>
#include <math.h>

int isPrime( long long n);
int main ()
{
    long long n;
    scanf("%ld",&n);
    long long i;
    for (i = 2; i < n/2; i++)
    {
        if (n%i==0)
        {
            if (isPrime(i))
            {
                break;
            }
            
        }
        
    }
    
    printf("%ld",n/i);
}
int isPrime(long long n)
{
    int res=1;
    if (n%2==0&&n!=2)
    {
        res=0;
    }else{
        for (int i = 3; i <=sqrt(n); i+=2)
        {
            if (n%i==0)
            {
                res=0;
                break;
            }
            
        }
    }
    
    return res;
}