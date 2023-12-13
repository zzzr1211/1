#include <stdio.h>
int main ()
{
    long long a,b,c,max,min,x,y,z;
    scanf("%ld%ld%ld",&a,&b,&c);

    max=min=a;
    if(b>max)max=b;
    if(b<min)min=b;
    if(c>max)max=c;
    if(c<min)min=c;

    x=max;y=min;z=x%y;
    while (z!=0)
    {
        x=y;
        y=z;
        z=x%y;
    }
    
    printf("%lld/%lld",min/y,max/y);
}