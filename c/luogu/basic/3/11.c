#include <stdio.h>
#include <math.h>
long long l;
int number(long long n);
int isPalindrome(long long n,int number);
int isPrime( long long n);
int main ()
{
    long long a,b;
    scanf("%ld%ld",&a,&b);

    for (l = a/2*2+1; l <=b&&l<10000000; l+=2)
    {
        if (isPalindrome(l,number(l)))
        {
            if (isPrime(l))
            {
                printf("%ld\n",l);
            }
            
        }
        
    }
    
}
int number(long long n)
{
    int res=0;
    while (n>0)
    {
        n/=10;
        res++;
    }
    return res;
}

int isPalindrome(long long n,int number)
{
    int res=1,a[10]={0};
    
    for (int i = 0; i < number; i++)
    {
        a[i]=n%10;
        n/=10;
    }
    
    for (int i = 0; i < number/2; i++)
    {
        if (a[i]!=a[number-i-1])
        {
            res=0;
            break;
        }
        
    }
    if (a[number-1]%2==0)
    {
        l=(a[number-1]+1)*pow(10,number-1)+1;
    }
    
    
    return res;
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