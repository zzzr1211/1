#include <stdio.h>
int f(int x);
int main ()
{
    int n,m,count=0;
    scanf("%d%d",&n,&m);
    if (n>m)
    {
        int t=m;
        m=n;
        n=t;
    }
    
    for (int i = n; i <=m; i++)
    {
        if (f(i)==1)
        {
            count++;
        }
        
    }
    
    printf("%d",count);
}
int f(int x)
{
    int ret=0,sum=0,y=x;
    while (y>0)
    {
        int z=y%10;
        sum+=z*z*z;
        y/=10;
    }
    
    if (sum==x)
    {
        ret=1;
    }

    return ret;
    
}