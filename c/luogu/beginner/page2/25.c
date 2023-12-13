#include <stdio.h>
int C(int n)
{
    return n*(n-1)/2;
}
int sqar(int n,int m)
{
    if(n!=1&&m!=1) return n*m+sqar(n-1,m-1);
    else return n*m;
}
int main ()
{
    int m,n;
    scanf("%d%d",&m,&n);
    
    printf("%lld %lld",sqar(n,m),C(n+1)*C(m+1)-sqar(n,m));
}