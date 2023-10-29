#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    float sum=0;
    for ( int i = 0; i < a; i++)
    {
        sum+=1.0/(2*i+1);
    }
    
    printf("%.2f",sum);
}