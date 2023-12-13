#include <stdio.h>


int main ()
{
    long long n;
    scanf("%ld",&n);
    int x,a[10]={0};
    scanf("%d",&x);;

    for (int i = 1; i <=n; i++)
    {
        int b=i;
        while (b>0)
        {
            a[b%10]++;
            b/=10;
        }
        
    }
    
    printf("%d",a[x]);
}
