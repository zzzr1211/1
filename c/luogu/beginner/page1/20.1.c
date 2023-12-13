#include <stdio.h>
int main ()
{
    int r,c,zr,zc;
    char a[52];
    scanf("%d%d%d%d",&r,&c,&zr,&zc);
    for (int i = 0; i < r; i++)
    {
        scanf("%s",a);
        for (int j = 0; j < zr; j++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int l = 0; l < zc; l++)
                {
                    printf("%c",a[k]);
                }
                
            }
            printf("\n");
        }
        
    }
    
    
}