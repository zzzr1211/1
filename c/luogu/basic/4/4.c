#include <stdio.h>

int main ()
{
    int l,m,u,v,count=0;
    scanf("%d%d",&l,&m);
    int a[10001]={0};


    for (int i = 0; i < m; i++)
    {
       scanf("%d%d",&u,&v);
       for (int j = u; j <v+1; j++)
       {
        a[j]=1;
       }
        
    }
    
    for (int i = 0; i < l+1; i++)
    {
        if (a[i]==0)
        {
            count++;
        }
        
    }
    

    printf("%d",count);
}