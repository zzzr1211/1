#include <stdio.h>
int main ()
{
    int n,count=0,x;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        if (x%7==0)
        {
            count++;
        }
        
    }
    printf("%d",count);
}