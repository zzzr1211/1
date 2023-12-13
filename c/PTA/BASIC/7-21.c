#include <stdio.h>
#include <math.h>
int main ()
{
    int N;
    int x,y;
    long long res=0;
    scanf("%d",&N);

    for ( x = 1; x <100; x++)
    {
        for ( y = x; y <=100; y++)
        {
            if (x*x+y*y==N)
            {
                printf("%d %d\n",x,y);
                res+=1;
                break;
            }else if (x*x+y*y>N)
            {
                break;
            }
            
            
        }
        
    }
    
    if (res==0)
    {
        printf("No Solution");
    }
    
}