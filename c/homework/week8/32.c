#include <stdio.h>
#include <math.h>

int main ()
{
    double a,b,c;
    double x1,x2;

    scanf("%lf %lf %lf",&a,&b,&c);

    if (a==0&&b==0&&c!=0)
    {
        printf("Not An Equation");
    }else if (a==0&&b==0&&c==0)
    {
        printf("Zero Equation");
    }else if (a==0)
    {
        printf("%.2lf",-c/b);
    }else{
        if (b*b==4*a*c)
        {
            x1=x2=(-b)/2/a;
            printf("%.2lf\n%.2lf",x1,x2);
        }else if (b*b-4*a*c>0)
        {
            x1=(-b+sqrt(b*b-4*a*c))/2/a;
            x2=(-b-sqrt(b*b-4*a*c))/2/a;

            if (x1>x2)
            {
                printf("%.2lf\n%.2lf",x1,x2);
            }else {
                printf("%.2lf\n%.2lf",x2,x1);
            }
        }else {
            double i;
            i=sqrt(4*a*c-b*b)/2/a;
            x1=x2=-b/2/a;
            if (b!=0)
            {
                printf("%.2lf+%.2lfi\n%.2lf-%.2lfi",x1,i,x2,i);
            }else printf("0.00+%.2lfi\n0.00-%.2lfi",i,i);
            
            
        }
        
        
        
    }
    
    return 0;

}
    
    