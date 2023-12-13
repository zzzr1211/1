#include <stdio.h>
#include <string.h>
int main ()
{
    char a[10];
    int count=0;
    gets(a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]!=' '&&a[i]!='\n')
        {
            count++;
        }
        
    }
    

    printf("%d",count);
}