#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main ()
{
    char s[]={"hello"};
    char *p=strchr(s,'l');
    char c=*p;
    *p='\0';//ȡǰ��
    //p=strchr(p+1,'l');//Ѱ�ҵڶ���
    char *t=(char*)malloc(strlen(s)+1);//���ƺ��
    strcpy(t,s);
    *p=c;
    printf("%s\n",t);
    free(t);

    return 0;
}