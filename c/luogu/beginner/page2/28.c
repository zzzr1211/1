#include <stdio.h>
void sort(long long a[],int n)
{
    long long temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]<a[j+1]){temp=a[j+1];a[j+1]=a[j];a[j]=temp;}
        }
    }
}
int main ()
{
    int n,res=1;
    long long x[100],y[100];

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%ld",&x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%ld",&y[i]);
    }

    sort(x,n);sort(y,n);
    for (int i = 0; i < n; i++)
    {
        if(x[i]>y[i]){res=0;break;}
    }
    
    if(res==0)printf("NE");
    else printf("DA");
}