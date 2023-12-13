#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 10
#define MAXS 20

int max_len( char *s[], int n );

int main()
{
    int i, n;
    char *string[MAXN] = {NULL};
    
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        string[i] = (char *)malloc(sizeof(char)*MAXS);
        scanf("%s", string[i]);
    }
    printf("%d\n", max_len(string, n));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int max_len( char *s[], int n )
{
    int max=0;
    for (int i = 0; i < n; i++)
    {
        int len=strlen(s[i]);
        if (len>max)
        {
            max=len;
        }
        
    }
    
    return max;
}