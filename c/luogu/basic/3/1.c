#include <stdio.h>
int main ()
{
    int n,a,min=1000;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        if (a<min)
        {
            min=a;
        }
        
    }
    
    printf("%d",min);
}