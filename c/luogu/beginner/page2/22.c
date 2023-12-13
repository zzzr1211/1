#include <stdio.h>
int main()
{
    int n,m,count=0;
    scanf("%d%d",&n,&m);
    char a[101][102]={};
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            scanf("%c",&a[i][j]);
            while (a[i][j]!='*'&&a[i][j]!='.')scanf("%c",&a[i][j]);
            
            
            if(a[i][j]=='*')
                if(a[i-1][j]!='*'&&a[i][j-1]!='*')
                    count++;
        }
        
    }
    printf("%d",count);
}