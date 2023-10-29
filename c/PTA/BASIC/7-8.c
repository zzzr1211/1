#include <stdio.h>

int main ()
{
    int v;
    scanf("%d",&v);

    printf("Speed: %d - ",v);
    if (v<=60)
    {
        printf("OK");
    }else printf("Speeding");
    
}