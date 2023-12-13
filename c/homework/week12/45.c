#include<stdio.h>
int main ()
{
    int m,n,p,q,a[101][101],b[101][101],c[101][101]={0};
    scanf("%d%d",&n,&m);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1;  j<=m; j++)scanf("%d",&a[i][j]);
    }
    scanf("%d%d",&p,&q);
    for (int i = 1; i <=p; i++)
    {
        for (int j = 1;  j<=q; j++) scanf("%d",&b[i][j]);
    }

    if (m!=p)
    {
        printf("sad");
    }else{
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=q; j++)
            {
                for (int k = 1; k<=n; k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
                
            }
            
        }
        
        for (int i = 1; i <=n; i++)
        {
            printf("%d",c[i][1]);
            for (int j = 2;  j<=q; j++)
            {
                printf(" %d",c[i][j]);
            }
            printf("\n");
        }
    }
       
    
}