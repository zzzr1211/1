#include <stdio.h>
int main ()
{
    int a,sum;
    scanf("%d",&a);
    sum=0;

    for (int i = 0; i <= a; i++)
    {
        sum+=i;
    }
    
    printf("%d",sum);

    return 0;
}