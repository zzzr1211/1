#include <stdio.h>
int main ()
{
    char a;
    int count=0;
    scanf("%c",&a);
    while (a!='\n')
    {
        if (a>='0'&&a<='9')
        {
            count++;
        }
        scanf("%c",&a);
    }
    
    printf("%d",count);
}