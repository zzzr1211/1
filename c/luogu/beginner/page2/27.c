#include <stdio.h>
int main ()
{
    int n;
    char a,b;
    scanf("%d",&n);
    scanf("%c",&a);
    while (a<'A'||a>'Z')scanf("%c",&a);
    
    for (int i = n-1; i > 0; i--)
    {
        scanf("%c",&b);
        while (b<'A'||b>'Z')scanf("%c",&b);

        if(a==b)n--;
        a=b;
    }
    printf("%d",n+1);
}