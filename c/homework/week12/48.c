#include <stdio.h>
int main ()
{
    int n;
    char a[101];
    scanf("%d",&n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        gets(a);
        for (int j = 0;a[j]!='\0'; j++)
        {
            if (a[j]=='F'||a[j]=='f')
            {
                a[j]+=2;
            }else if (a[j]=='H'||a[j]=='h')
            {
                a[j]-=2;
            }         
        }
        printf("%s",a);
        if (i!=n-1)
        {
            printf("\n");
        }
        
    }
    
}