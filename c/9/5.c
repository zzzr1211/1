#include <stdio.h>

int main ()
{
    char ac[]={0,1,2,3,4,5,6,7,8,9,-1};
    char *p=ac;
    

    for ( p = ac; *p!=-1; *p++)
    {
        printf("%d\n",*p);
    }

    while (*p!=-1)
    {
        printf("%d\n",*++);
    }
    
    
    
    int ai[]={0,1,2,3,4,5,6,7,8,9,-1,};
    int *q=ai;
    return 0;
}