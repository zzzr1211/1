#include <stdio.h>
int main ()
{
    int count[110][110]={0},last[110][110]={0},n,m,x,y,x1,y1,x2,y2;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    for (int k = 1; k <=x; k++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        for (int i = x1; i <=x2; i++)
        {
            for (int j = y1; j <=y2; j++)
            {
                count[i][j]++;
                last[i][j]=k;
            }
            
        }
        
    }
    for (int k = 1; k <=y; k++)
    {
        scanf("%d%d",&x1,&y1);
        if (count[x1][y1]==0)
        {
            printf("N\n");
        }else printf("Y %d %d\n",count[x1][y1],last[x1][y1]);
        
    }
    
}