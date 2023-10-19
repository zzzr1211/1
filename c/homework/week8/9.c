#include <stdio.h>

int main ()
{
    char a,b;
    scanf("%c %c",&a,&b);

    a=a+'A'-'a';
    b=b+'a'-'A';

    printf("%c %c",a,b);

    return 0;
}