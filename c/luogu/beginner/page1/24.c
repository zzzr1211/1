#include <stdio.h>
#include <math.h>

int main()
{
    long long a,b,c,d,x,y,z=0;
    scanf("%ld/%ld%ld/%ld",&a,&b,&c,&d);
    x=a*c;
    y=b*d;
    while (y!=0)
    {
        z=x%y;
        x=y;
        y=z;
    }
    printf("%ld %ld",b*d/x,a*c/x);
    
}