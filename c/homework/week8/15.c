#include <stdio.h>

int main ()

{
    char a;
    int b,res;

    scanf("%c%d",&a,&b);

    res=a-'A'+b-1;

    printf("%d",res);
    return 0;
    
}