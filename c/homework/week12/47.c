#include <stdio.h>
int main ()
{
    int m,n,count=0;
    char a[101][101]={' '};
    while (scanf("%d %d",&m,&n)!=EOF)
    {
        for (int i = 1; i <=m; i++)
        {
            getchar();
            for (int j = 1; j<=n; j++)
            {
                scanf("%c",&a[i][j]);
            }
            
        }
        
        for (int i = 1; i <=m; i++)
        {
            for (int j = 1; j<=n; j++)
            {
                if (a[i][j]!='*')
                {
                    for (int p = i-1; p <=i+1&&p<=m; p++)
                    {
                        for (int q = j-1; q <=j+1&&q<=n; q++)
                        {
                            if (a[p][q]=='*')
                            {
                                a[i][j]++;
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        if (count!=0)
        {
            printf("\n");
        }
        
        for (int i = 1; i <=m; i++)
        {
            for (int j = 1; j<=n; j++)
            {
                if (a[i][j]!='*')
                {
                    printf("%d",a[i][j]-'.');
                }else printf("*");
                
            }
            printf("\n");
        }
        count++;
    }
    
}