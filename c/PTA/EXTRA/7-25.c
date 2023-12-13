#include <stdio.h>
int main ()
{
    int a,b,res=1;
    scanf("%D%D",&a,&b);

    for (int i = 0; i < b; i++)
    {
        res*=a;
        res=res%10000;
    }
    
    printf("%04d",res);
}