#include <stdio.h>

int search(int key,int a[],int length);
int main()
{
    int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
    int x;
    int loc;
    printf("请输入一个数字：");
    scanf("%d",&x);
    loc=search(x,a,sizeof(a)/sizeof(a[0]));//sizeof(a)/sizeof(a[0])表示数组长度
    if (loc!=-1)
    {
        printf("%d在第%d个位置上",x,loc);
    }else{
        printf("%d不存在",x);
    }
    return 0;
    
}

int search(int key,int a[],int length)//函数中需要单独一个变量表示数组长度
{
    int ret=-1;
    int i;
    for (i = 0; i < length; i++)
    {
        if (a[i]==key)
        {
            ret=i;
            break;
        }
        
    }
    return ret;
}