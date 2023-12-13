#include <stdio.h>
#include <string.h>
int main ()
{
    int binary,m,digit=0,sign=0;
    char a[1100];
    scanf("%d ",&binary);
    scanf("%s",a);
    digit=strlen(a);
    for (int i = 0; i < digit; i++)
    {
        m=a[i]-'0';
        if (m!=0)
        {
            if(sign)printf("+");
            printf("%d*%d^%d",m,binary,digit-i-1);
            sign=1;
        }
        
    }
    
}