#include <stdio.h>
#include <string.h>
int main ()
{
    int n,res=1;
    char a[110],b[110]={},g[110];
    scanf("%d",&n);
    scanf("%s%s",a,g);

    for (int i = 0; i < n; i++)
    {
        if (a[i]<g[i])
        {
            printf("-1");
            res=0;
            break;
        }else b[i]=g[i];
        
    }
    if (res)
    {
        printf("%s",b);
    }
    
}