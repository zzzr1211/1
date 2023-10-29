#include <stdio.h>
 int main ()
 {
    int A[3];
    for (int  i = 0; i < 3; i++)
    {
        scanf("%d",&A[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2-i; j++)
        {
            if (A[j]>A[j+1])
            {
                int t=A[j+1];
                A[j+1]=A[j];
                A[j]=t;
            }
            
        }
        
    }
    
    printf("%d",A[2]);

    return 0;
    
 }