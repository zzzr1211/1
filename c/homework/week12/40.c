#include <stdio.h>
char a[8001][8001];
int main ()
{
    int n,q,x;
    char cr;
    scanf("%d%d",&n,&q);
    long long money;
    for (int i = 0; i < q; i++)
    {
        getchar();
        scanf("%c %d",&cr,&x);
        money=0;
        if (cr=='R')
        {
            for (int j = 1; j <=n; j++)
            {
                if (a[j][x]=='\0')
                {
                    money+=x+j;
                    a[j][x]=' ';
                }
            }
            
        }else{
            for (int j = 1; j <=n; j++)
            {
                if (a[x][j]=='\0')
                {
                    money+=x+j;
                    a[x][j]=' ';
                }
            }
            
        }
        printf("%ld\n",money);
    }
    return 0;
}