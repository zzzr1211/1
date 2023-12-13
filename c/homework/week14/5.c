#include <stdio.h>
int main ()
{
    char a[1010];
    int count=1,i;
    scanf("%s",a);
    for (i = 1;a[i]!='\0'; i++)
    {
        if (a[i]!=a[i-1])
        {
            printf("%d%c",count,a[i-1]);
            count=1;
        }else if (a[i]==a[i-1])
        {
            count++;
        }
    }
    printf("%d%c",count,a[i-1]);
}