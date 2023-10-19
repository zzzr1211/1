#include <stdio.h>
#include <math.h>
int main ()
{
    double x1,y1,x2,y2,x3,y3;
    double a,b,c;
    int res=0;
    double L,A;

    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);

    a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

    if (a+b>c&&a+c>b&&b+c>a)
    {
        res=1;
    }else printf("Impossible");

    if (res==1)
    {
        L=a+b+c;
        A=sqrt(L/2*(L/2-a)*(L/2-b)*(L/2-c));
        printf("L = %.2lf, A = %.2lf",L,A);
    }
    
    
    return 0;
}