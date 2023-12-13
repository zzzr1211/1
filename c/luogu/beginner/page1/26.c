#include <stdio.h>
#include <string.h>
int change (char a[]);
int main ()
{
    char a[10],b[10];
    scanf("%s%s",a,b);
    if(change(a)%47==change(b)%47)
    {
        printf("GO");
    }else printf("STAY");
} 
int change (char a[])
{
    int res=1;
    for (int i = 0; i < strlen(a); i++)
    {
        res*=a[i]-'A'+1;
    }
    return res;
}