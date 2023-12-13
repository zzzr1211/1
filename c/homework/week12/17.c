#include <stdio.h>
int main ()
{
    int a[40]={1,1},n,m;
    scanf("%d",&n);
    for (int i = 2; i < 40; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&m);
        printf("%d\n",a[m-1]);
    }
    
}