#include <stdio.h>
#define number a[i/4] 
int main ()
{
    int n;
    char a[100];
    scanf("%d",&n);
    getchar();
    scanf("%s",a);
    
    for (int i = 0; i < 4*n-1; i++)
    {
        if (i%4==0&&number!='1')
        {
            printf("X");
        }else if (i%4==1&&number!='1'&&number!='4')
        {
            printf("X");
        }else if (i%4==2)
        {
            printf("X");
        }else printf(".");
    }
    printf("\n");
    for (int i = 0; i < 4*n-1; i++)
    {
        if (i%4==0&&number!='1'&&number!='2'&&number!='3'&&number!='7')
        {
            printf("X");
        }else if (i%4==1)
        {
            printf(".");
        }else if (i%4==2&&number!='5'&&number!='6')
        {
            printf("X");
        }else printf(".");
    }
    printf("\n");
    for (int i = 0; i < 4*n-1; i++)
    {
        if (i%4==0&&number!='1'&&number!='7')
        {
            printf("X");
        }else if (i%4==1&&number!='0'&&number!='1'&&number!='7')
        {
            printf("X");
        }else if (i%4==2)
        {
            printf("X");
        }else printf(".");
    }printf("\n");
    for (int i = 0; i < 4*n-1; i++)
    {
        if (i%4==0&&number!='1'&&number!='7'&&number!='3'&&number!='4'&&number!='5'&&number!='9')
        {
            printf("X");
        }else if (i%4==1)
        {
            printf(".");
        }else if (i%4==2&&number!='2')
        {
            printf("X");
        }else printf(".");
    } printf("\n");
    for (int i = 0; i < 4*n-1; i++)
    {
        if (i%4==0&&number!='1'&&number!='7'&&number!='4')
        {
            printf("X");
        }else if (i%4==1&&number!='1'&&number!='4'&&number!='7')
        {
            printf("X");
        }else if (i%4==2)
        {
            printf("X");
        }else printf(".");
    }   
}