#include<stdio.h>
int main ()
{
    char a[250][250];
    int x,y,n,x1,x2,y1,y2;long long count=0;
    scanf("%d%d%d",&x,&y,&n);

    for (int k = 0; k < n; k++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
            {
                if(a[i][j]!='1')count++;
                a[i][j]='1';
            }
             
        }
        
    }
    
    printf("%ld",count);
}