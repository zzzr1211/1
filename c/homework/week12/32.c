#include <stdio.h>
#include <string.h>
int main ()
{
    int n,m,a[101][101]={0},count=0;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            scanf("%d",&a[i][j]);
            if (a[i][j]==1)
            {
                count++;
            }
            
        }
        
    }
    printf("%d\n",count);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if (a[i][j]==1)
            {
                printf("%d %d\n",i,j);
            }
            
        }
        
    }
    
}