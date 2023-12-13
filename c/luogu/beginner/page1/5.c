#include <stdio.h>
int main ()
{
    long long k,m,n,a,b,count=0;
    scanf("%ld%ld%ld",&k,&m,&n);
    for (long long i = 1; i <=m; i++)
    {
        scanf("%ld%ld",&a,&b);
        if (a==0&&b>0||(long long)(k/a)*b>=n)
        {
            if(count!=0)printf(" ");
            printf("%ld",i);
            count++;
        }
        
    }
    if(count==0)printf("-1");
}