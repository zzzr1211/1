#include <stdio.h>
#include <math.h>
int a[1025][1025];
void pardon(int n);
int main ()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=pow(2,n); i++)
        for (int j = 1; j <=pow(2,n); j++)
                a[i][j]=1;

    pardon(n);

    for (int i = 1; i <=pow(2,n); i++)
        {
            for (int j = 1; j <=pow(2,n); j++)
                {
                    printf("%-02d",a[i][j]);
                }
            printf("\n");
        }

    return 0;
}
void pardon(int n)
{
    int x,y=pow(2,n);
    for(int k=1;k<=n;k++)
    {
        x=pow(2,k);
        for (int i = 1; i <=y; i++)
            for (int j = 1; j <=y; j++)
                {
                    if (i%x<=x/2&&i%x>0)
                    {
                        if (j%x<=x/2&&j%x>0)
                            a[i][j]=0;
                    }
                    
                }
    }
}