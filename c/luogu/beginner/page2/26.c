#include <stdio.h>
#define n 3
int main ()
{
    int a[100];
    char b[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%s",b);

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[b[i]-'A']);
        if(i!=n-1)printf(" ");
    }
    
}