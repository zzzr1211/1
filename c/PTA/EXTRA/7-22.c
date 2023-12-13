#include <stdio.h>
int main ()
{
    long long p;
    int res=0;
    scanf("%ld",&p);

    for (int i = 0; i < 20000; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (p==i*i*i-j*j*j)
            {
                res=1;
                
            }
            
        }
        
    }
    if (res==0)
    {
        printf("NO");
    }else printf("YES");
    
}