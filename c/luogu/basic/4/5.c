#include <stdio.h>
#include <math.h>
int main ()
{
    int c[1000],m[1000],e[1000];
    int n,count=0;
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d%d%d",&c[i],&m[i],&e[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (abs(c[i]-c[j])<=5&&abs(m[i]-m[j])<=5&&abs(e[i]-e[j])<=5)
            {
                if (abs(c[i]+m[i]+e[i]-c[j]-m[j]-e[j])<=10)
                {
                    count++;
                }
                
            }
            
        }
        
    }
    printf("%d",count);
}