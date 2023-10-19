#include <stdio.h>
int main ()
{
    double open,high,low, close;
    scanf("%lf%lf%lf%lf",&open,&high,&low, &close);

    if (close<open)
    {
        printf("BW-Solid");
    }else if (close>open)
    {
        printf("R-Hollow");
    }else{
        printf("R-Cross");
    }
    
    int count=0;

    if (low<open&&low<close)
    {
        if (count==0)
        {
            printf(" with ");
        }if (count==1)
        {
            printf(" and ");
        }
        
        printf("Lower Shadow");
        count++;
    }

    if (high>open&&high>close)
    {
        if (count==0)
        {
            printf(" with ");
        }if (count==1)
        {
            printf(" and ");
        }

        printf("Upper Shadow");
    }
    
    
}