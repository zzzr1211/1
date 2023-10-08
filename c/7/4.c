#include <stdio.h>
void A(int,char);
void B(int);
int main()
{
    int a ;
    scanf("%d",&a);
    A(a/100,'B');
    A(a/10%10,'S');
    B(a%10);
    return 0;
}

void A(int a,char b)
{
    for (int i = 0; i < a; i++)
    {
        printf("%c",b);
    }
    
    
}

void B(int a)
{
    for (int i = 1; i <=a ; i++)
    {
        printf("%d",i);
    }
    
}