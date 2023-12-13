#include <stdio.h>
void space(int a);
int C(int m,int n);
int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if (n>m)
    {
        n=m+n;
        m=n-m;
        n=n-m;
    }
    
    for (int i = n; i <=m; i++)
    {
        space(m-i);
        printf("%d",C(0,i-1));
        for (int j = 1; j < i; j++)
        {
            printf(" %d",C(j,i-1));
        }
        printf("\n");
    }
    
}

void space(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf(" ");
        
    }
    
}

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
    
    return (int)res%10;
}