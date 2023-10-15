#include <stdio.h>
#include <string.h>

int mycmp (const char*s1,const char*s2)
{

    //int idx=0;
    while (*s1==*s2&&*s1!='\0')
    {
        // if (s1[idx]!=s2[idx])
        // {
        //     break;
        // }else if (s1[idx]=='\0')
        // {
        //     break;
        // }

        s1++;
        s2++;
        
    }
    
    return *s1-*s2;
}

int main ()
{
    char s1[]="abc";
    char s2[]="abc ";
    char s3[]="bbc";
    char s4[]="Abc";
    printf("%d\n",strcmp(s1,s2));
    printf("%d\n",mycmp(s1,s2));
    printf("%d\n",strcmp(s1,s3));
    printf("%d\n",strcmp(s1,s4));
    printf("%d\n",'a'-'A');


    return 0;
}