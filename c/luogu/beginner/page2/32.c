#include <stdio.h>
void print(int a,int b)
{
    for (int i = 0; i < b; i++)
    {
        printf("%d",a);
    }
    
}
int main ()
{
    int n,a[10]={},b;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b);
        a[b]++;
    }
    
    if (a[5]<9&&a[0]==0)
    {
        printf("-1");
    }else if (a[5]<9)
    {
        printf("0");
    }else{
        print(5,a[5]-a[5]%9);
        print(0,a[0]);
    }
    
    
}