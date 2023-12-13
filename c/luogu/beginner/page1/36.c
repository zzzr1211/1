#include <stdio.h>
int main ()
{
    int n,res=0;
    scanf("%d",&n);
    if(n%2==0)res++;
    if(n>4&&n<=12)res++;

    if(res==2)printf("1 ");else printf("0 ");
    if(res>=1)printf("1 ");else printf("0 ");
    if(res==1)printf("1 ");else printf("0 ");
    if(res==0)printf("1");else printf("0");
}