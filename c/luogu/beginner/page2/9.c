#include <stdio.h>
#include <string.h>
typedef struct 
{
    char name[22];
    int food;
}child;


int main()
{
    int n,warn=0,dif;
    scanf("%d",&n);
    child a[101];
    
    for (int i = 1,j=1; i <=n; i++)
    {
        scanf("%s",a[j].name);
        dif=1;
        for (int k = 1; k < j; k++)
        {
            if(!strcmp(a[j].name,a[k].name))
            {
                dif=0;
                if(a[k].food*2>i-1)warn++;
                a[k].food++;
                break;
            }
        }
        if(dif)
        {
            a[j].food=1;
            j++;
        }
    }
    printf("%d",warn);
}