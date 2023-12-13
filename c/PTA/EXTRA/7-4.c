#include <stdio.h>
int main ()
{
    long long n,a,b,c,x,y;
    scanf("%ld%ld%ld%ld%ld%ld"
        ,&n,&a,&b,&c,&x,&y);
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        if (a+i*b>c&&(i+1)%x==0||a+i*b>c&&(i+1)%y==0)
        {
            sum+=a+i*b;
        }
        
    }
    
    printf("%ld",sum);
}