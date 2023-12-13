#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    long long a[401];
    a[0]=a[1]=1;
    for (int i = 2; i <=400; i++)
    {
        a[i]=(a[i-1]+a[i-2])%1000007;
    }
    for (int i = 1; i <=n; i++)
    {
        int x;
        scanf("%d",&x);
        
        printf("Case %d:\n%ld\n",i,a[x]);
        
    }
    
}