#include <stdio.h>
#include <string.h>

void caps(char a[]);
int main ()
{
    char a[11],b[1000001];
    int count=0,first=-1,i,j;

    gets(a);
    gets(b);

    strcat(a," ");
    strcat(b," ");

    caps(a);
    caps(b);//ͳһ��Сд

    int x=strlen(b),y=strlen(a);
    for (i = 0;b[i]!='\0'; i++)
    //ѭ���ж������ʹ��i<x�ᵼ�³�ʱ��ԭ����
    {
        if (b[i]==' ')
        {
            
            for (j = 1; j <y; j++)
            {
                if (b[i-j]!=a[y-j-1])
                {
                    break;
                }
            }
            if (j==y)
            {
                if (i<j||b[i-j]==' ')
                {
                    count++;
                    if (count==1)
                    {
                        first=i+1-j;
                    }
                }
               
            }    
            
        }
        
    }

    if (count>0)
    {
        printf("%d ",count);
    }
    printf("%d",first);
    
}
void caps(char a[])
{
    for (long long i = 0;a[i]!='\0'; i++)
    {
        if (a[i]>='a')
        {
            a[i]=a[i]-'a'+'A';
        }
        
    }
    
}