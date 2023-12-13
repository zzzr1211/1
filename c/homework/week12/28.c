#include <stdio.h>
#include <string.h>
int main ()
{
    char a[20010],b[10001];
    gets(a);
    for (int i = strlen(a)/2+1,j=0; i < strlen(a); i++,j++)
    {
        b[j]=a[i];
    }
    a[strlen(a)/2]='\0';
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-'a'+'A';
        }else a[i]=a[i]+'a'-'A';
        
        if (a[i]>='a'&&a[i]<='z')
        {
            a[i]=(a[i]-'a'+26-2)%26+'a';
        }else a[i]=(a[i]-'A'-2+26)%26+'A';
    }
    int res=1;
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c",a[i]);
        if (a[i]!=b[i])
        {
            res=0;
            
        }
        
    }
    if (res==1)
    {
        printf("Yes");
    }else printf("No");
    
}