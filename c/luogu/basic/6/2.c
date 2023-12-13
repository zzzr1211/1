#include<stdio.h>
#include<math.h>
int isPrime(int x);
int main ()
{
    int n,a[101],space=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            if (space)printf(" ");
            printf("%d",a[i]);
            space=1;
        }
    }
    return 0;
}
int isPrime(int x)
{
    int ret=1;
    for (int i = 2; i <=sqrt(x); i++)
    {
        if (x%i==0)
        {
            ret=0;
            break;
        }
        
    }
    if (x<=1)ret=0;
    
    return ret;
}