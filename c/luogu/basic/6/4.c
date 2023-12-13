#include <stdio.h>
void Bubble_Sort(int a[],int n);
int main ()
{
    int m,n,a[21],sum;
    double score,max=0;
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)scanf("%d",&a[j]);
        Bubble_Sort(a,m);
        sum=0;
        for (int j = 1; j < m-1; j++)sum+=a[j];
        score=sum*1.0/(m-2);
        if(score>max)max=score;
    }
    
    printf("%.2lf",max);
}
void Bubble_Sort(int a[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
            
        }
        
    }
    
}