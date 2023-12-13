#include <stdio.h>
#include <string.h>
int main ()
{
    int n,m,a[101][101]={0},max1=0,max_len=0,max2=0,max_col=0,len[101],col[101];
    scanf("%d%d",&n,&m);
    for (int i = 1; i <=n; i++)
    {
        len[i]=0;
        for (int j = 1; j <=m; j++)
        {
            scanf("%d",&a[i][j]);
            len[i]+=a[i][j];
        }
        if (len[i]>max1)
        {
            max1=len[i];
            max_len=i;
        }
        
    }

    for (int j = 1; j <=m; j++)
    {
        col[j]=0;
        for (int i = 1; i <=n; i++)
        {
            col[j]+=a[i][j];
        }
        if (col[j]>max2)
        {
            max2=col[j];
            max_col=j;
        }
    }
    
    if (max1>max2)
    {
        printf("0 %d",max_len);
    }else printf("1 %d",max_col);
    
}