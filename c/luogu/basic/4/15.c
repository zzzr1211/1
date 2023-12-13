#include <stdio.h>
#define right 1
#define down 2
#define left 3
#define up 4
int main ()
{
    int a[9][9]={0},n;
    int direction=right;
    scanf("%d",&n);
    int x=0,y=0;
    a[0][0]=1;
    for (int i = 2; i < n*n+1; i++)
    {
        if (direction==right)
        {
            x+=1;
        }else if (direction==down)
        {
            y+=1;
        }else if (direction==left)
        {
            x-=1;
        }else if (direction==up)
        {
            y-=1;
        }
        
        a[x][y]=i;

        if (direction==right&&(x==n-1||a[x+1][y]!=0))
        {
            direction=down;
        }else if (direction==down&&(y==n-1||a[x][y+1]!=0))
        {
            direction=left;
        }else if (direction==left&&(x==0||a[x-1][y]!=0)){
            direction=up;
        }else if (direction==up&&(y==0||a[x][y-1]!=0)){
            direction=right;
        }
        
    }    
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d",a[j][i]);
        }
        printf("\n");
    }
    
    

}