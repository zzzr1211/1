#include <stdio.h>
int main ()
{
    double a;
    scanf("%lf",&a);

    if((long)a==a){
        printf("%d ",(long)a);}
    else printf ("%d ",(long)a+1);

    printf("%d ",(long)a);
    printf("%.5lf",a);

    return 0;
}