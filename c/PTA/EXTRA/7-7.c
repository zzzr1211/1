#include <stdio.h>
#include <math.h>

int main ()
{
    double a;
    scanf("%lf",&a);
    while(a<1000){
        scanf("%lf",&a);
    }

    printf("%d",(int)sqrt(a));
}