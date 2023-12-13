#include <stdio.h>
int f(int n);
void zero(int i);
void color(int x,int floor);
int main ()
{
    int n;
    scanf("%d",&n);
    int floor=f(n);
    for (int i = floor ; i >0; i--)
    {
        zero(i);
        color(i,floor);
        zero(i);
        printf("\n");
    }
    
}

int f(int n)
{
    int i;
    for (i = 1; i*(i+1)/2<n; i++){}
    return i-1;
}

void zero(int x)
{
    for (int i = 0; i < x-1; i++)
    {
        printf("0");
    }
    
}

void color(int x,int floor)
{
    printf("%d",x);
    for (int i = 0;  < floor-x; i++)
    {
        printf("0%d",x);
    }
    
}