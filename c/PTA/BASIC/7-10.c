#include <stdio.h>

int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);

    float h=b<40? b:(40+(b-40)*1.5);

    float p=a<5? (30*h):(50*h);

    printf("%.2f",p);

    return 0;    
}   