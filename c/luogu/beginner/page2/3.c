#include<stdio.h>
int a[1001][1001]={};
int main()
{
    int n,m,k,b[1001]={},count,day,dif;
    scanf("%d%d%d",&n,&m,&k);
    for (int i = 0; i < n; i++)
    {
        count=0;
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&day);
            a[i][day]=++count;

            dif=1;
            for (int l = 0; l < i; l++)
            {
                if(a[i][day]==a[l][day])
                {dif=0;break;}
            }
            if(dif)b[day]++;
        }
        
    }
    
    for (int i = 1; i <=k; i++)
    {
        printf("%d ",b[i]);
    }
    
}