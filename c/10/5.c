#include <stdio.h>
#include <string.h>

int main ()
{
    char s1[]="abc";
    char s2[]="abc ";
    char s3[]="bbc";
    char s4[]="Abc";
    printf("%d\n",strcmp(s1,s2));
    printf("%d\n",strcmp(s1,s3));
    printf("%d\n",strcmp(s1,s4));
    printf("%d\n",'a'-'A');


    return 0;
}