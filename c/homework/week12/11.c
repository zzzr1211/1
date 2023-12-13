#include <stdio.h>
int main ()
{
    int n,space=1;
    scanf("%d",&n);
    long long a[1000]={0},delete;
    for (int i = 0; i < n; i++)
    {
        scanf("%ld",&a[i]);
    }
    scanf("%ld",&delete);

    for (int i = 0; i < n; i++)
    {
        if (a[i]!=delete)
        {
            if (space==0)
            {
                printf(" ");
            }
            printf("%ld",a[i]);
            space=0;
        }
        
    }
    
    
}