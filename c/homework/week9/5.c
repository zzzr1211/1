#include <stdio.h>
int main ()
{
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    if (c=='+')
    {
        printf("%d",a+b);
    }else if (c=='-')
    {
        printf("%d",a-b);
    }else if (c=='*')
    {
        printf("%d",a*b);
    }else if (c=='/'&&b!=0)
    {
        printf("%.2lf",(double)a/(double)b);
    }else if (c=='%'&&b!=0)
    {
        printf("%d",a%b);
    }else printf("Error");
    
}