#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main ()
{
    char s[]={"hello"};
    char *p=strchr(s,'l');
    char c=*p;
    *p='\0';//取前段
    //p=strchr(p+1,'l');//寻找第二个
    char *t=(char*)malloc(strlen(s)+1);//复制后段
    strcpy(t,s);
    *p=c;
    printf("%s\n",t);
    free(t);

    return 0;
}