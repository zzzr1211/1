#include <stdio.h>
#include <math.h>
int a[1025][1025];
void pardon(int i,int j,int n);
int main ()
{
    int n,x;
    scanf("%d",&n);
    x=pow(2,n);
    for (int i = 1; i <=x; i++)
        for (int j = 1; j <=x; j++)
                a[i][j]=1;

    pardon(1,1,x);

    for (int i = 1; i <=x; i++)
        {
            for (int j = 1; j <=x; j++)
                {
                    printf("%-02d",a[i][j]);
                }
            printf("\n");
        }

    return 0;
}
void pardon(int i,int j,int n)
{
    if (n==2)
    {
        a[i][j]=0;
    }else{
        int edge1=i+n/2,edge2=j+n/2;
        for(int x=i;x<edge1;x++)
            for(int y=j;y<edge2;y++)
                a[x][y]=0;
        
        pardon(edge1,j,n/2);
        pardon(i,edge2,n/2);
        pardon(edge1,edge2,n/2);
    }
    
}