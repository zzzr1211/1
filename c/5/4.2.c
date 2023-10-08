#include <stdio.h>
int main()
{
    int a,b,t;
    int ret;
    scanf("%d %d",&a,&b);
    do{
        t=a%b;
        a=b;
        b=t;
    }while (b!=0);

    ret=a;

    printf("最大公约数是%d。\n",a);
    
    return 0;
}