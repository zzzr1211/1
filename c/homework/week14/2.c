#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];
    
    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int getindex( char *s )
{
    int res=-1;
    char *a[]={"Sunday","Monday","Tuesday","Wednesday",
            "Thursday","Friday","Saturday"};
    for (int i = 0; i < 7; i++)
    {
        if (s==a[i])
        {
            res=i;
        }
        
    }
    return res;
}