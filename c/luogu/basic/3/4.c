#include <stdio.h>
int main ()
{
    int n,count=1;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf("%02d",count++);
        }
        
        printf("\n");
    }
    
}