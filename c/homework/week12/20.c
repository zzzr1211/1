#include <stdio.h>
int main ()
{
    long long f[1000]={0,1};
    for (int i = 2; i < 1000; i++)
    {
        f[i]=(f[i-1]%1000000007+f[i-2]%1000000007)%1000000007;
    }


    long long n,a[1000]={0},res=1;


    scanf("%ld",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%ld",&a[i]);
    }


    for (int i = 0; i < n; i++)
    {
        if (a[i]!=f[i])
        {
            res=0;
            break;
        }
        
    }
    if (res==1)
    {
        printf("YES");
    }else printf("NO");
    
}