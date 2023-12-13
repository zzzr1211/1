#include<stdio.h>
int main ()
{
    int k,n,res=0,a[21][21]={},b[21];
    scanf("%d%d",&k,&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j]=1;
        }
        
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d",&b[j]);
            for (int k = 1; k <j; k++)
            {
                a[b[j]][b[k]]=0;
            }
            
        }
        

    }
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(a[i][j]!=0&&i!=j)res++;
        }
        
    }
    printf("%d",res);
}