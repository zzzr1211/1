
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, index, n, x, a[10];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", 
&a[i]
);
    scanf("%d", &x);
    
index=-1
;
    for (i = 0; i < n; i++)
        if (a[i] == x) {
            index = i;
            
break
;
        }
    if (index != -1)
        printf("%d\n", index);
    else
        printf("Not Found\n");
    return 0;
}