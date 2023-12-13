#include <stdio.h>

int main ()
{
    int n,m,t,x1,x2,y1,y2,k;
    int temp[1001][1001],a[1001][1001];
    scanf("%d%d",&n,&m);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&t);
    for (int l = 0; l < t; l++)
    {
        scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&k);
        for (int i = x1,x=1; i <x1+k; i++,x++)
        {
            for (int j = y1,y=1; j <y1+k; j++,y++)
            {
                temp[x][y]=a[i][j];
            }
        }
        for (int i = x1,x=x2; i <x1+k; i++,x++)
        {
            for (int j = y1,y=y2; j <y1+k; j++,y++)
            {
                a[i][j]=a[x][y];
            }
        }
        for (int i = x2,x=1; i <x2+k; i++,x++)
        {
            for (int j = y2,y=1; j <y2+k; j++,y++)
            {
                a[i][j]=temp[x][y];
            }
        }
    }
    for (int i = 1; i <=n; i++)
    {
        printf("%d",a[i][1]);
        for (int j = 2; j <=m; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
}
