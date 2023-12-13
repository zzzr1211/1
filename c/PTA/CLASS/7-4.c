#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char a='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf("%c ",a++);
            if (j==n-i-1)
            {
                printf("\n");
            }
            
        }
        
    }
    
}