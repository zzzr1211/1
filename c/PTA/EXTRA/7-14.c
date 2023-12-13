#include <stdio.h>
int main ()
{
    int n,sum=0,ip=0;
    scanf("%d",&n);
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    for (int i = 2; i < sum; i++)
    {
       if (sum%i==0)
       {
        ip=1;
        break;
       }
       
    }
    if (ip==1)
    {
        printf("So pity, Dao!");
    }else printf("Congratulations, Dao!");
    
}