#include <stdio.h>
int main ()
{
    int n,f,y;
    scanf("%d",&n);
    int esc=0;
    for (f = 1; f <100; f++)
    {
        for (y = 1; y <100; y++)
        {
            if (n==98*f-199*y)
            {
                esc=1;
                break;
            }
        
        }
        if (esc==1)
        {
            break;
        }
        
    }

    if(f<100)printf("%d.%d",y,f);
    else printf("No Solution");
}