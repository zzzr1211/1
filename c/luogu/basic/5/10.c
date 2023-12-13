#include <stdio.h>

int main ()
{
    int count1=0,count2=0;
    char a[256];
    scanf("%s",a);
    if (a[0]=='b')
    {
        count1++;
    }else if (a[0]=='g')
    {
        count2++;
    }
    
    
    
    for (int i = 1; a[i]!='\0' ; i++)
    {
        if (a[i]=='b'||a[i+1]=='o'||a[i+2]=='y')
        {
            count1++;
        }
        if (a[i]=='g'||a[i+1]=='i'||a[i+2]=='r'||a[i+3]=='l')
        {
            count2++;
        }
        
    }
    
    printf("%d\n%d",count1,count2);
}