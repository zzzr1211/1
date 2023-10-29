#include <stdio.h>

int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if (a==b&&a==c)
    {
        printf("bian");
    }else if (a==b||a==c||b==c)
    {
        printf("yao");
    }else printf("triangle");

    return 0;
    
    
}