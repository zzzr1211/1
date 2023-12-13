#include <stdio.h>


int main ()
{
    int n,res=0,sum=0,a,b;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&a,&b);
        res+=a+b-8;
        sum+=res;
    }
    printf("%d",sum);
}