#include <stdio.h>

int search(int key,int a[],int length);
int main()
{
    int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
    int x;
    int loc;
    printf("������һ�����֣�");
    scanf("%d",&x);
    loc=search(x,a,sizeof(a)/sizeof(a[0]));//sizeof(a)/sizeof(a[0])��ʾ���鳤��
    if (loc!=-1)
    {
        printf("%d�ڵ�%d��λ����",x,loc);
    }else{
        printf("%d������",x);
    }
    return 0;
    
}

int search(int key,int a[],int length)//��������Ҫ����һ��������ʾ���鳤��
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