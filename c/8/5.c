#include <stdio.h>
int isPrime(int x,int knowPrimes[],int numberofknowPrimes);
int main()
{
    const int number=100;
    int prime[number];
    prime[0]=2;
    int count=1;
    int i=3;
    while (count<number)
    {
        if (isPrime(i,prime,count))
        {
            prime[count++]=i;
        }
        i++;
    }
    for (int i = 0; i < number; i++)
    {
        printf("%d",prime[i]);
        if ((i+1)%5)
        {
            printf("\t");
        }else{
            printf("\n");
        }
    }
}
int isPrime(int x,int knowPrimes[],int numberofknowPrimes)
{
    int ret=1;
    int i;
    for (int i = 0; i < numberofknowPrimes; i++)
    {
        if (x%knowPrimes[i]==0)
        {
            ret=0;
            break;
        }
        
    }
    
    return ret;

}