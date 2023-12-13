#include <stdio.h>
#include <string.h>

int main ()
{
    int n,count=0;
    scanf("%d",&n);
    char a[101];
    scanf("%s",&a);

    for (int i = 0; i < n-1; i++)
    {
        if (a[i]=='V'&&a[i+1]=='K')
        {
            count++;
            a[i]='A';
            a[i+1]='A';
        }
                
    }

    for (int i = 0; i < n-1; i++)
    {
        if (a[i]=='V'&&a[i+1]=='V'||a[i]=='K'&&a[i+1]=='K')
        {
            count++;
            break;
        }
                
    }
    
    printf("%d",count);
}