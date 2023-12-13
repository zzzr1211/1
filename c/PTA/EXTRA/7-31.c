#include <stdio.h>
int main ()
{
    double a;
    scanf("%lf",&a);
    double x[1000]={a,(a+1)*0.5};
    int i;
    for (i = 1;; i++)
    {
        if (x[i]-x[i-1]>0.000001||x[i]-x[i-1]<-0.000001)
        {
            x[i+1]=0.5*(x[i]+a/x[i]);
        }else break;
        
    }
    printf("%.6lf",x[i]);
}