#include <stdio.h>
#include <math.h>
double dis(double x1,double y1,double x2,double y2)
{
    double res;
    res=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return res;
}
int main ()
{
    double x1,x2,x3,y1,y2,y3,l;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    l=dis(x1,y1,x2,y2)+dis(x1,y1,x3,y3)+dis(x2,y2,x3,y3);
    printf("%.2lf",l);
}