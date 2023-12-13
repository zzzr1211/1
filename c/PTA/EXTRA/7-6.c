#include <stdio.h>
int main ()
{
    int a[7],b[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    int res=0,rec=8;
    for (int i = 0; i < 7; i++)
    {
        if (a[i]+b[i]>rec)
        {
            res=i+1;
            rec=a[i]+b[i];
        }
        
    }
    
    printf("%d",res);
}