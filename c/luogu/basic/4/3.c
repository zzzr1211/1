#include <stdio.h>
int main ()
{
    int a[10000];
    int count=0;
    scanf("%d",&a[0]);
    while (a[count]!=1)
    {
        
        if (a[count]%2==0)
        {
            a[count+1]=a[count]/2;
        }else a[count+1]=a[count]*3+1;
        
        count++;
    }
    
    for (int i = count; i >=0; i--)
    {
        printf("%d ",a[i]);
    }
    
}