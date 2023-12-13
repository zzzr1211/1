#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0],m1=a[0]-1,m2=a[0]+1;
    for (int i = 1; i < N; i++)
    {
        if (a[i]>max)
        {
            m1=max;
            max=a[i];
            
        }
        if (a[i]<min)
        {
            m2=min;
            min=a[i];
        }
        if (a[i]<max&&a[i]>m1||m1==max)
        {
            m1=a[i];
        }
        if (a[i]>min&&a[i]<m2||m2==min)
        {
            m2=a[i];
        }
        
        
    }
    
    
    printf("%d %d",m1,m2);
}