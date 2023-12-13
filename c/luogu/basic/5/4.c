#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(char sign,int x,int y);
int main ()
{
    int n,x,y;
    scanf("%d",&n);
    char a[5],sign=0;
    for (int i = 0; i < n; i++)
    {        
        scanf("%s",a);

        if (a[0]>='a'&&a[0]<='c')
        {
            sign=a[0];
            scanf("%d %d",&x,&y);
        }else{
            x=atoi(a);
            //将字符串转化为整数
            scanf("%d",&y);
        }
        
        print(sign,x,y);
    }

}
void print(char sign,int x,int y)
{
    int k;
    if (sign=='a')
    {
        k=printf("%d+%d=%d",x,y,x+y);
        //printf返回值为输出的字符数量，包括数字，字母，标点符号，空格，转义字符
        
    }else if (sign=='b')
    {
        k=printf("%d-%d=%d",x,y,x-y);
    }else if (sign=='c')
    {
        k=printf("%d*%d=%d",x,y,x*y);
    }
    
    printf("\n%d\n",k);   
}