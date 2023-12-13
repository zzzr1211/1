#include<stdio.h>
int main ()
{
    int m,n,a[21][21],b[21][21],c[21][21]={0};
    scanf("%d%d",&m,&n);
    for (int i = 1; i <=m; i++)
    {
        for (int j = 1;  j<=n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1;  j<=m; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    for (int i = 1; i <=m; i++)
    {
        for (int j = 1;  j<=m; j++)
        {
            for (int k = 1; k <=n; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }
    for (int i = 1; i <=m; i++)
    {
        printf("%d",c[i][1]);
        for (int j = 2;  j<=m; j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
}