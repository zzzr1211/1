#include <stdio.h>
#include <math.h>
double dis(int x,int y,int i,int j);
int main ()
{
    int n,m,r,count=0,x,y;
    char a[110][110]={};
    scanf("%d%d%d",&n,&m,&r);

    for (int k = 0; k < m; k++)
    {
        scanf("%d%d",&x,&y);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis(x,y,i,j)<=r)
                {
                    if(a[i][j]!='1')count++;
                    a[i][j]='1';
                }
            }
             
        }
    }
    
    printf("%d",count);
}
double dis(int x,int y,int i,int j)
{
    return sqrt(pow(x-i,2)+pow(y-j,2));
}