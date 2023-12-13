#include <stdio.h>
long long game(long long n);
int main ()
{
    long long n;
    scanf("%ld",&n);
    printf("%ld",game(n));
}
long long game(long long n)
{
    long long res=0;
    if (n==1){}
    else if(n%2!=0) res=game(3*n+1)+1;
    else res=game(n/2)+1;

    return res;
}