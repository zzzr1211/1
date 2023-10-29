#include <stdio.h>
int main ()
{
    int n,u,d,i;
    scanf("%d%d%d",&n,&u,&d);
    
    for (i=1;;i++)
    {
        if (n<=(i-1)*(u-d)+u)
        {
            break;
        }
        
    }
    printf("%d",i*2-1);
}