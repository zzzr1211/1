#include <stdio.h>
int main ()
{
    int n,m,k,a[101][101]={0},count=0,x;
    char demand;
    scanf("%d%d%d",&n,&m,&k);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            a[i][j]=0;
        }
    }
    
    for (int i = 0; i < k; i++)
    {   
        getchar();
        scanf("%c %d",&demand,&x);
        if (demand=='C')
        {
            int t=1;
            for (int j = x*t; j<=m; j+=x)
            {
                for (int i = 1; i <=n; i++)
                {
                    a[i][j]++;
                }
                
            }
            
        }
        if (demand=='R')
        {
            int t=1;
            for (int i = x*t; i<=n; i+=x)
            {
                for (int j = 1; j <=m; j++)
                {
                    a[i][j]++;
                }
                
            }
            
        }
        
    }
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if (a[i][j]%2!=0)
            {
                count++;
            }
            
        }
    }
    printf("%d",count);
}