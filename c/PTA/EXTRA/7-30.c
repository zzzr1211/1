#include <stdio.h>
int f(int n,int x);
int main ()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);

    if (f(n,a)==f(n,b))
    {
        printf("%d is a perfect number.",n);
    }else printf("%d is not a perfect number.",n);
    
}

int f(int n,int x)
{
    int sum=0;

    while (n>0)
    {
        sum+=n%x;
        n/=x;
    }
    
    return sum;
}