#include <stdio.h>
#include <math.h>

int main (){
    double x;
    double y;
    scanf("%lf",&x);
    
    if (x<1)
    {
        y=x;
    }else if (x<10)
    {
        y=sqrt(2*x-1);
    }else y=log(3*x-11);
    
    


    printf("%.3lf",y);
    
}