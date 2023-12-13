#include <stdio.h>
#include <string.h>
int main ()
{
    int n,len;
    scanf("%d",&n);
    char a[100]={};
    for (int i = 0; i < n; i++)
    {
        scanf("%s",a);
        while (a[0]<'0'||a[0]>'9')
        {
            scanf("%s",a);
        }
        
        len=strlen(a)-1;
        if (a[len]=='0'||
        a[len]=='2'||
        a[len]=='4'||
        a[len]=='6'||
        a[len]=='8')
        printf("even\n");
        else printf("odd\n");
    }
    
}