#include <stdio.h>

int main ()
{
    int res=0;
    int m,n;
    
    scanf("%d %d",&m,&n);
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    
    for (int i = 1; i < m-1; i++)
    {
        for (int j = 1; j < n-1; j++)
        {
            if (A[i][j]>A[i-1][j]&&A[i][j]>A[i+1][j]&&A[i][j]>A[i][j-1]&&A[i][j]>A[i][j+1])
            {
                printf("%d %d %d\n",A[i][j],i,j);
                res=1;
            }
            
        }
        
    }

    if (res==0)
    {
        printf("None %d %d",m,n);
    }
    
} 
