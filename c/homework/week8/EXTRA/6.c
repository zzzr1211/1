#include <stdio.h>
 int main ()
 {
    double A[2];
    for (int  i = 0; i < 2; i++)
    {
        scanf("%lf",&A[i]);
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1-i; j++)
        {
            if (A[j]<A[j+1])
            {
                double t=A[j+1];
                A[j+1]=A[j];
                A[j]=t;
            }
            
        }
        
    }
    int a=0;
    for (int i = 0; i < 2; i++)
    {
        if (a==1)
        {
            printf(" ");
        }
        
        printf("%.3lf",A[i]);
        a=1;
        
    }
    

    return 0;
    
 }