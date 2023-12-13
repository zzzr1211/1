#include <stdio.h>
#include <math.h>
int main ()
{
    int a[105][105]={0};
    int n,m,k,x,y,count=0;
    scanf("%d %d %d",&n,&m,&k);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d",&x,&y);
        x=x+2;y=y+2;
        for (int k = x-2; k <=x+2; k++)
        {
            for (int j = y-2; j <=y+2; j++)
            {
                if (abs(k-x)+abs(j-y)<=2)
                {
                    a[k][j]=1;
                }
                
            }
            
        }
        
    }

    for (int i = 0; i < k; i++)
    {
        scanf("%d %d",&x,&y);
        x=x+2;y=y+2;
        for (int k = x-2; k <=x+2; k++)
        {
            for (int j = y-2; j <=y+2; j++)
            {
                    a[k][j]=1;
            }
            
        }
        
    }

    for (int i = 3; i < n+3; i++)
    {
        for (int j = 3; j < n+3; j++)
        {
            if (a[j][i]==0)
            {
                count++;
            }
            //printf("%3d",a[j][i]);
        }
        //printf("\n");
    }
    
    printf("%d",count);
}