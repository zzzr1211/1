#include <stdio.h>
int main ()
{
    int a,b,past=1;
    char *week[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday",
                    "Friday","Saturday"};
    scanf("%d%d",&a,&b);
    for (int i = 0; i < b; i++)
    {
        past=past*a%7;
    }
    
    printf("%s",week[past]);
}