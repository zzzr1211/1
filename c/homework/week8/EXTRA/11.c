#include <stdio.h>
 int  main ()
 {
    int x,a;
    scanf("%d",&x);
    a=0;
    if (x==6)
    {
        a+=4;
    }else if (x==7)
    {
        a+=6;
    }else a+=2;
    
    x++;
    if (x==6)
    {
        a+=4;
    }else if (x==7)
    {
        a+=6;
    }else a+=2;
    printf("%d",a);
    return 0;
 }