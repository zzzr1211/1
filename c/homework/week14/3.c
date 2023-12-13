#include <stdio.h>
#include <string.h>

int main ()
{
    int m,n,sum;
    scanf("%d%d",&m,&n);
    int a[m][n],(*p)[n];
    p=a;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            sum+=*(*(p+i)+j);
        }
        printf("%d %.1lf\n",sum,sum*1.0/n);
    }
    return 0;
}
