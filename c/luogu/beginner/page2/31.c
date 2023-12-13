#include <stdio.h>

int main ()
{
    int h1[10],h2,count=0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&h1[i]);
    }
    scanf("%d",&h2);

    for (int i = 0; i < 10; i++)
    {
        if(h1[i]<=h2+30)count++;
    }
    
    printf("%d",count);
}