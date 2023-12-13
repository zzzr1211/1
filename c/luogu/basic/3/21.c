#include <stdio.h>
int main ()
{
    int a[13]={0},save=0,money=0,res=1;
    for (int i = 1; i <=12; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 1; i <=12; i++)
    {
        money=money+300-a[i];
        while (money>=100)
        {
            money-=100;
            save+=100;
        }
        if (money<0)
        {
            res=0;
            printf("-%d",i);
            break;
        }
        
    }
    if (res==1)
    {
        printf("%d",money+save*12/10);
    }
    
}

int isPrime(int n)
{
    int res=1;
    if (n%2==0)
    {
        res=0;
    }else{
        for (int i = 3; i <=sqrt(n); i+=2)
        {
            if (n%i==0)
            {
                res=0;
                break;
            }
            
        }
    }
    
    return res;
}