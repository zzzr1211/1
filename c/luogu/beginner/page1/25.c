#include <stdio.h>
int main ()
{
    char a;
    int count=0;
    scanf("%c",&a);
    while (a!='@')
    {
        if (a=='(')
        {
            count++;
        }
        if(a==')')
        {
            count--;
        }

        if (count<0)
        {
            break;
        }
        scanf("%c",&a);
    }
    

    if (count!=0)
    {
        printf("NO");
    }else printf("YES");
    
} 