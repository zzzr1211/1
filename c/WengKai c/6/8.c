#include <stdio.h>
int main()
{
    char text;//������һ���ı�
    int count=0;
    int sign=0;
    while (text!='.')
    {
        scanf("%c",&text);
        if (text!=' ')
        {
            count++;
        }
        else if (text==' ')
        {
            if (count!=0)
            {
                if (sign!=0)
                {
                    printf(" ");
                }
                printf("%d",count);
                sign++;
                
            }
            count=0;
        }
        
    }
    if (count>1)
    {
        printf(" %d",count-1);
    }
    
}