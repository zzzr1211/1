#include <stdio.h>

int main ()
{
    float r,p1,p2;
    int s1,s2;
    scanf ("%f",&r);

    s1=r*r*2;
    p1=s1/3.14/r/r*100;
    s2=4*r*r;
    p2=3.14/4*100;

    printf("%d %.2f%%\n%d %.2f%%",s1,p1,s2,p2);
    return 0;
}