#include <stdio.h>
#include <math.h>

int main (){
    double x;
    double y;
    scanf("%lf",&x);
    // if (x<0)
    // {
    //     y=x+10;
    // }else if (x==0)
    // {
    //     y=0;
    // }else y=x*x-10;
    //printf("%d",y);
    if (x<0)
    {
        y=-x;
    }else if (x<1)
    {
        y=x;
    }else if (x==1)
    {
        y=3;
    }else y=sqrt(pow(x,3)-2*x);
    
    
    


    printf("%lf",y);
    
}