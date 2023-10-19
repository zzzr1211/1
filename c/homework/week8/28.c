#include <stdio.h>

int main ()
{
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    if(h>=19){
        printf("+%02d:%02d:%02d",h-19,m,s);
    }else if (h<7)
    {
        printf("+%02d:%02d:%02d",h+24-19,m,s);
    }else{
        printf("-%02d:%02d:%02d",19-h-1,60-m-1,60-s);
    }
    return 0;
}