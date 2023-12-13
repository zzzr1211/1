#include <stdio.h>
#include <string.h>

int main()
{
    char *a[]={"red", "blue", "yellow", "green", "black" };
    char b[10];
    gets(b);
    int res=0;
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(b,a[i])==0)
        {
            res=i+1;
        }
        
    }
    if (res==0)
    {
        printf("Not Found");
    }else printf("%d",res);
    
    
}
