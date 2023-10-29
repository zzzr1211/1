#include <stdio.h>
#include <math.h>
double f(double x);
float a3,a2,a1,a0;
int main ()
{
    
    scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
    float a,b;
    scanf("%f%f",&a,&b);

    while (f((a+b)/2)!=0)
    {
        if (f((a+b)/2)*f(a)>0)
        {
            a=(a+b)/2;
        }else b=(a+b)/2;
        
        if ((b-a)<0.0001)
        {
            break;
        }
        
    }
    
    printf("%.2f",(a+b)/2);
    return 0;
}

double f(double x)
{
    double ret=0;

    ret=a3*x*x*x+a2*x*x+a1*x+a0;

    return ret;
}