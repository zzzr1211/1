#include <stdio.h>
#include <math.h>

int main ()
{
    int a;
    scanf("%d",&a);

    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        sum+=pow((a%10),3);
        a/10;
    }
    
    if (sum==a)
    {
        printf("yes");
    }else printf("no");
    
}