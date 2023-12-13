#include <stdio.h>

int main ()
{
    int k;
    scanf("%d",&k);

    double s=1;
    long long n=1;
    while (s<=k)
    {
        n++;
        s+=1.0/n;     
    }

    printf("%ld",n);   
}