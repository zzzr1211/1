#include<stdio.h>
int main()
{
    int cm,a;
    scanf("%d",&cm);
    int i,b;
    i=12*cm*1.0/(30.48*13);
    a=i/12;
    b=i-a*12;
    printf("%d %d",a,b);
    return 0;
}