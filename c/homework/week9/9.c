#include <stdio.h>
int main ()
{
    int m,n;
    scanf("%d%d",&m,&n);
    long long a,b;
    a=b=0;
    for (int i = m; i <=n; i++)
    {
        if (i%2!=0)
        {
            a+=i*i;
        }else {
            b+=i*i*i;
        }
        
        
    }
    
    printf("%ld %ld",a,b);
}