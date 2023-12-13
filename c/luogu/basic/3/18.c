#include <stdio.h>
void square (int n);
void triangle (int n);

int main ()
{
    int n;
    scanf("%d",&n);
    square(n);
    printf("\n");
    triangle(n);
}
void square (int n)
{
    int count=0;
    for (int i = 1; i <=n*n; i++)
    {
        printf("%02d",i);
        count++;
        if (count%n==0)
        {
            printf("\n");
        }
        
    }
    
}
void triangle (int n)
{
    int count=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            printf("  ");
        }
        
        for (int j = 0; j < i+1; j++)
        {
            printf("%02d",count++);
        }
        printf("\n");
    }
    
}
