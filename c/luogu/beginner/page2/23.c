#include <stdio.h>

int main ()
{
    int n,m;
    int a[111][111]={};
    double b[111][111]={};

    scanf("%d%d",&n,&m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(i==1||j==1||i==n||j==m)b[i][j]=a[i][j];
            else b[i][j]=(a[i][j]+a[i][j-1]+a[i-1][j]
                            +a[i+1][j]+a[i][j+1])*1.0/5;
        }
        
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%.0lf",b[i][j]);
            if(j!=m)printf(" ");
            else printf("\n");
        }
        
    }
    
} 