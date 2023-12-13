#include <stdio.h>
long long f(long long x);
int main ()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        long long a,b;
        scanf("%ld %ld",&a,&b);

        if (f(a)==b&&f(b)==a)
        {
            printf("YES\n");
        }else printf("NO\n");
        
    }
    
    return 0;
}


long long f(long long x)
{
    long long sum=0;
    for (int i = 1; i < x; i++)
    {
        if (x%i==0)
        {
            sum+=i;
        }
        
    }
    return sum;
}