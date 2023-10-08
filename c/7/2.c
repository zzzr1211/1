#include <stdio.h>

int max(int,int);  //ÉùÃ÷
int main()
{
    int a,b,c;
    a=5;
    b=6;
    c=max(10,12);
    c=max(a,b);
    c=max(c,23);
    printf("%d\n",max(a,b));

    return 0;
}

int max(int a,int b)   //¶¨Òå
{
    int ret;
    if (a>b)
    {
        ret=a;
    }else{
        ret=b;
    }
    
    return ret;
}
