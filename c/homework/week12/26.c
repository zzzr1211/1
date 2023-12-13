#include <stdio.h>
#include <string.h>
int main ()
{
    int n,judge;
    scanf("%d\n",&n);
    char a[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",a);
        judge=1;
        for (int j = 0; j < strlen(a)/2; j++)
        {
            if (a[j]!=a[strlen(a)-1-j])
            {
                judge=0;
                break;
            }
            
        }
        if (judge==1)
        {
            puts(a);
        }
        
    }
    
}