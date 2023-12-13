#include <stdio.h>
#include <math.h>
int isPrime( long long n);
int main ()
{
    long long l,package[5005]={0},count=0,sum=0;
    scanf("%ld",&l);

    for (int i = 2;; i++)
    {
        if (isPrime(i))
        {
            if (sum+i>l)
            {
                break;
            }else{
                package[count]=i;
                sum+=i;
                count++;
            }            
        }
    }
    
    for (int i = 0; i < count; i++)
    {
        printf("%ld\n",package[i]);
    }
    printf("%ld",count);
    
}
int isPrime( long long n)
{
    int res=1;
    
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            res=0;
            break;
        }
        
    }
    
    return res;
}