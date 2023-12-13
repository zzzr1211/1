#include <stdio.h>
int main ()
{
    int n,m,count=1;
    long min=100007,a[101][101];
    scanf("%d%d",&n,&m);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            scanf("%ld",&a[i][j]);
            if (a[i][j]<min)
            {
                min=a[i][j];
                count=1;
            }else if (a[i][j]==min)
            {
                count++;
            }
            
            
        }
    }
    printf("%ld\n",count);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if (a[i][j]==min)
            {
                printf("%d %d\n",i,j);
            }
            
            
        }
    }
    
}