#include <stdio.h>
#include <math.h>
int main ()
{
    double a[310]={},average=0,max=0,temp;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&a[i]);
        average+=a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    average=(average-a[0]-a[n-1])/(n-2);
    for (int i = 1; i < n-1; i++)
    {
        if (fabs(a[i]-average)>max)
        {
            max=fabs(a[i]-average);
        }
        
    }
    printf("%.2lf %.2lf",average,max);
}