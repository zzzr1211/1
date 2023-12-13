#include <stdio.h>
int main ()
{
    int r,c,zr,zc;
    char a[52][52];
    scanf("%d%d%d%d",&r,&c,&zr,&zc);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%c",&a[i][j]);
            //getchar();
            while(a[i][j]=='\n'||a[i][j]=='\r')
            {
                scanf("%c",&a[i][j]);
            }
            
        }
    }
    for (int i = 0; i < zr*r; i++)
    {
        for (int j = 0; j < zc*c; j++)
        {
            printf("%c",a[i/zr][j/zc]);
        }
        printf("\n");
    }
    
}