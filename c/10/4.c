#include <stdio.h>
#include <string.h>

int mylen(const char*s)
{
    int cnt=0;
    int idx=0;
    while (s[idx]!='\0')
    {
        idx++;
        cnt++;
    }

    return cnt;
    
}
int main ()
{
    char line[]="Hello";
    printf("strlen=%lu\n",mylen(line));
    printf("sizeof=%lu\n",sizeof(line));

    return 0;
}