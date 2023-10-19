#include <stdio.h>

int main ()
{
    int a,b,c;
    float A,B,C;
    scanf("%d %d %d",&a,&b,&c);
    A=1.0*(b*b+c*c-a*a)/(2*b*c);
    B=1.0*(c*c+a*a-b*b)/(2*a*c);
    C=1.0*(a*a+b*b-c*c)/(2*a*b);

    printf("%.6f %.6f %.6f",A,B,C);

    return 0;

}