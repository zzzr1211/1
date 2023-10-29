#include <stdio.h>

int main ()
{
    char a;
    scanf("%c",&a);
    if (a>='0'&&a<='9')
    {
        printf("%d",a);

    }else printf("input error");

    return 0;
    
}