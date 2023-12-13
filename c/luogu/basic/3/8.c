#include <stdio.h>
int main ()
{
    int k,n=1;
    long long money=0;
    scanf("%d",&k);

    while (n*(n+1)/2<k)
    {
        n++;
    }
    n--;
    
    for (int i = 1; i <=n; i++)
    {
        money+=i*i;
        k-=i;
    }
    
    money+=(n+1)*k;


    printf("%ld",money);
}