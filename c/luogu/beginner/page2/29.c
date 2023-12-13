#include <stdio.h>
#include <string.h>
int main ()
{
    char var[3]={'0','0','0'};
    char pas[256];
    int len;
    scanf("%s",pas);
    len=strlen(pas);

    for (int i = 0; i < len; i++)
    {
        if(pas[i]==':'&&pas[i+1]=='=')
        {
            if(pas[i+2]>='0'&&pas[i+2]<='9')
                var[pas[i-1]-'a']=pas[i+2];
            else var[pas[i-1]-'a']=var[pas[i+2]-'a'];

            i=i+2;
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%c",var[i]);
        if(i!=3-1)printf(" ");
    }
    
}