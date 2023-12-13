#include <stdio.h>
#include <string.h>
int main ()
{
    char b[201];
    int count=0;

    gets(b);

    for (int i = 0;b[i]!='\0'; i++)
    {
        if (b[i]==' '||b[i]=='a'||b[i]=='d'||b[i]=='g'||b[i]=='j'||b[i]=='m'||b[i]=='p'||b[i]=='t'||b[i]=='w')
        {
            count+=1;
        }else if (b[i]=='b'||b[i]=='e'||b[i]=='h'||b[i]=='k'||b[i]=='n'||b[i]=='q'||b[i]=='u'||b[i]=='x')
        {
            count+=2;
        }else if (b[i]=='s'||b[i]=='z')
        {
            count+=4;
        }else 
        {
            count+=3;
        }   
    }
    
    printf("%d",count);
}