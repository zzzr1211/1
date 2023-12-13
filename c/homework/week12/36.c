#include <stdio.h>
int main ()
{
    int n,m,a[101][101]={0};
    scanf("%d%d",&n,&m);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}