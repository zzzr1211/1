#include <stdio.h>
int main ()
{
    char a[10];
    scanf("%s",a);
    for (int i = 4; i >= 0 ; i--)
    {
        printf("%c",a[i]);
    }
    
}