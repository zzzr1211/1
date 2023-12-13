#include <stdio.h>
int main ()
{
    int b,s1,s2,n=7;
    scanf("%d%d%d",&b,&s1,&s2);
    if (b<=7)
    {
        for (int i = 0; i < b; i++)
        {
            s1+=n;
            n--;
        }
        
    }else s1+=28+(b-7)*8;
    
    if (s1>s2)
    {
        printf("YES");
    }else printf("NO");
    
    
}