#include <stdio.h>
int main ()
{
    long long a[100];
    scanf("%ld",&a[0]);
    int n=0;
    while (a[n]!=0)
    {
        n++;
        scanf("%ld",&a[n]);
    }
    
    for (int i = n-1; i >=0 ; i--)
    {
        printf("%ld ",a[i]);
    }
    
    
}