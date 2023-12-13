#include <stdio.h>
int main ()
{
int n,a[100],b[100]={0};
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i; j++)
    {
        if (a[j]<a[i])
        {
            b[i]++;
        }
        
    }
    
}

for (int i = 0; i < n; i++)
{
    printf("%d ",b[i]);
}

}