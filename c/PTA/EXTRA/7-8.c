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
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;

            }

        }
        
    }
    
    int sum=0;
    for (int i = 1; i < N-1; i++)
    {
        sum+=a[i];
    }
    
    printf("%.1lf",sum*1.0/(N-2));
}