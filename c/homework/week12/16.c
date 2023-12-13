#include <stdio.h>
int main ()
{
    int n,m,index;
    long long a[100],min,ai;
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        scanf("%ld",&a[i]);
    }
    scanf("%ld",&ai);
    for (int i = 0; i < m; i++)
    {
        min=1000000000,index=-1;
        for (int j = 0; j < n; j++)
        {
            if (a[j]<min)
            {
                index=j;
                min=a[j];
            }
            
        }
        a[index]+=ai;
    }
    min=1000000000;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min)
            {
                min=a[i];
            }
    }
    
    printf("%ld",min);
}