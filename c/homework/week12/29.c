#include <stdio.h>
#include <string.h>
int main ()
{
    int m,n=0;
    scanf("%d",&m);
    char s[101];
    scanf("%s",s);
    for (n = 0; (n+1)*m <=strlen(s); n++)
    {
        if (n%2==0)
        {
            for (int i = n*m; i < (n+1)*m; i++)
            {
                printf("%c",s[i]);
            }
            
        }else {for (int i = (n+1)*m-1; i>=n*m; i--)
            {
                printf("%c",s[i]);
            }
        }
         
        
        
    }
    for (int i = n*m; i < strlen(s); i++)
    {
        printf("%c",s[i]);
    }
    
    
}