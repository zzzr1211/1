#include <stdio.h>

int number(long long n);
int main ()
{
    long long n,res=0;
    scanf("%ld",&n);
    int sign=1;

    if (n<0)
    {
        n=-n;
        sign=-1;
    }
    
    for (int i = 0; i < number(n); )
    {
        res=res*10+n%10;
        n/=10;
    }
    
    printf("%ld",res*sign);

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