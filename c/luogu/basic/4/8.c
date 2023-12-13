#include <stdio.h>
int main ()
{
    int n,a[39][39]={0};
    scanf("%d",&n);
    a[0][(n-1)/2]=1;
    int x=1,y=(n-1)/2;
    for (int k = 2; k <= n*n; k++)
    {
        int firstrow=0,lastcolumn=0;
        for (int i = 0; i < n; i++)
        {
            if (a[0][i]==k-1)
            {
                firstrow=1;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i][n-1]==k-1)
            {
                lastcolumn=1;
            }
            
        }
        if (firstrow==1&&lastcolumn==0)
        {
            x=n-1;
            y=y+1;
            a[x][y]=k;
        }else if (firstrow==0&&lastcolumn==1)
        {
            x=x-1;
            y=0;
        }else if (firstrow==1&&lastcolumn==1)
        {
            x=x+1;
        }else{
            if (a[x-1][y+1]==0)
            {
                x=x-1;
                y=y+1;
            }else {
                x=x+1;
            }
            
        }   
        a[x][y]=k;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}
