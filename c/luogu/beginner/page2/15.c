#include <stdio.h>
#include <string.h>

int isNum(char n)
{
    if(n>='0'&&n<='9')return 1;
    else return 0;
}

int main()
{
    int i,j,n,sign;
    long long sum=0,len;
    char a[66666];
    scanf("%s",a);
    len=strlen(a);
    for (i = 0; i < len; i++)
    {
        if (isNum(a[i]))
        {
            if(i>0&&a[i-1]=='-')sign=-1;
            else sign=1;

            for (j = i; j < len; j++)
            {
                if(!isNum(a[j]))break;
            }
            
            n=0;
            for (; i < j ; i++)
            {
                n=n*10+(a[i]-'0');
            }
            
            sum+=sign*n;
        }
        
    }
    
    printf("%lld",sum);
}