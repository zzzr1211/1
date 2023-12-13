#include<stdio.h>
int m,n,a[1001][1001],b[1001][1001];
int main ()
{

    scanf("%d%d",&m,&n);
    for (int i = 1; i <=m; i++)
    {
        for (int j = 1;  j<=n; j++)
        {
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
        
    }
    for (int i = 1; i <=n; i++)
    {
        printf("%d",b[i][1]);
        for (int j = 2;  j<=m; j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    
}