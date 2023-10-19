#include <stdio.h>
#include <math.h>

int main ()
{
    int a,b,c,d;
    double s;

    scanf("%d%d%d%d",&a,&b,&c,&d);
    s=(double)sqrt(pow(a-c,2)+pow(b-d,2));
    printf ("%.2lf",s);
    return 0;
}