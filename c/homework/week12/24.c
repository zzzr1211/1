#include <stdio.h>
int main ()
{
    int n,m,a,count=0;
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        if (a==1)
        {
            count++;
        }
        
    }
    if (m%2==0)
    {
        printf("%d",count);
    }else printf("%d",n-count);
    
}