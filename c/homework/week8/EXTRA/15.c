#include <stdio.h>
int main ()
{
    char a;

    scanf("%c",&a);

    if (a>='a')
    {
        printf("%c",a+'B'-'b');
    }else printf("%c",a+'b'-'B');
    
    return 0;
}