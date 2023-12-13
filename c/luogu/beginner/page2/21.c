#include <stdio.h>
#include <string.h>

int main ()
{
    int a[9]={},len;
    char b[111];
    scanf("%s",b);
    len=strlen(b);

    for (int i = 0; i < len; i++)
    {
        if (b[i]=='1'||b[i]=='Q'||b[i]=='A'||b[i]=='Z')
        {
            a[0]++;
        }else if (b[i]=='2'||b[i]=='W'||b[i]=='S'||b[i]=='X')
        {
            a[1]++;
        }else if (b[i]=='3'||b[i]=='E'||b[i]=='D'||b[i]=='C')
        {
            a[2]++;
        }else if (b[i]=='4'||b[i]=='R'||b[i]=='F'||b[i]=='V')
        {
            a[3]++;
        }else if (b[i]=='5'||b[i]=='T'||b[i]=='G'||b[i]=='B')
        {
            a[3]++;
        }else if (b[i]=='6'||b[i]=='Y'||b[i]=='H'||b[i]=='N')
        {
            a[4]++;
        }else if (b[i]=='7'||b[i]=='J'||b[i]=='M'||b[i]=='U')
        {
            a[4]++;
        }else if (b[i]=='8'||b[i]=='I'||b[i]=='K'||b[i]==',')
        {
            a[5]++;
        }else if (b[i]=='9'||b[i]=='O'||b[i]=='L'||b[i]=='.')
        {
            a[6]++;
        }else if (b[i]=='0'||b[i]=='P'||b[i]==';'||b[i]=='/')
        {
            a[7]++;
        }else if (b[i]=='-'||b[i]=='='||b[i]=='['||b[i]==']'||b[i]=='\'')
        {
            a[7]++;
        }
        
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",a[i]);
    }
    
}