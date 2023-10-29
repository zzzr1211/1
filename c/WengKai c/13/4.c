#include <stdio.h>
int main ()
{
    unsigned char c=0xA5;
    printf(" c=%hhx\n",c);
    printf("~c=%hhx\n",(char)~c);
    printf("-c=%hhx\n",(char)-c);
    printf("c<<2=%hhx\n",c<<2);

    return 0;
}