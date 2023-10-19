#include <stdio.h>

int main ()
{
    int h,f,c,d;

    scanf("%d %d",&h,&f);

    c=(h*4-f)/2;
    d=h-c;

    printf("%d %d",c,d);

    return 0;
}