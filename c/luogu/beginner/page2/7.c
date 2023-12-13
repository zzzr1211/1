#include <stdio.h>
int main ()
{
    int a[10],b,count=0,dif;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&b);
        a[i]=b%42;
        dif=1;
        for (int j = 0; j < i; j++)
        {
            if(a[j]==a[i]){dif=0;break;}
        }
        
        if(dif)count++;
    }
    printf("%d",count);
}