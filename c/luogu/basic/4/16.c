#include <stdio.h>
int C(int m,int n)
{
    double res=1.0;
    for (int i = 1; i <=n; i++)
    {
        res*=i;
    }
    for (int i = 1; i <=m; i++)
    {
        res=res*1.0/i;
    }
    for (int i = 1; i <=n-m; i++)
    {
        res=res*1.0/i;
    }
    
    return (int)res;
}

int main ()
{
    int n;
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        printf("%d",C(0,i-1));
        for (int j = 1; j < i; j++)
        {
            printf(" %d",C(j,i-1));
        }
        printf("\n");
    }
}
