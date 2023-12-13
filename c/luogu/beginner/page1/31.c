#include <stdio.h>
#include <math.h>

int main ()
{
    long long s,i,r=0,temp1,temp2;
    double beta,gama;
    int day;

    scanf("%ld%ld%d",&s,&i,&day);
    scanf("%lf%lf",&beta,&gama);

    for (int j = 0; j < day; j++)
    {
        temp1=ceil(beta*s*i);
        temp2=ceil(gama*i);

        if(temp1>s){temp1=s;}

        s-=temp1;
        i+=temp1-temp2;
        r+=temp2;
    }
    
    printf("%ld %ld %ld",s,i,r);
}