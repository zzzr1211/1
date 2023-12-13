#include <stdio.h>
int main ()
{
    int m,n,k,t,rest;
    scanf("%d%d%d",&m,&n,&k);
    if(m>=2*n)t=n;
    else t=m/2;

    rest=m+n-3*t;

    if (rest<k)
    {
        t-=(k-rest-1)/3+1;
    }
    
    printf("%d",t);
}