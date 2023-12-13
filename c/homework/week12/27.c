#include <stdio.h>
#include <string.h>
int main ()
{
    int n;
    char a[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s",a);
        for (int j = strlen(a)-1;j>=0; j--)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    
}
