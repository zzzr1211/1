#include <stdio.h>
 
int main()
{
    int h;
    float x1=2,y1=2;
    float x2=-2,y2=2;
    float x3=-2,y3=-2;
    float x4=2,y4=-2;
    float x,y,d1,d2,d3,d4;
    scanf("%f %f",&x,&y);
    //��õ㵽�����ĵ�ľ���
    d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    d2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
    d3=(x-x3)*(x-x3)+(y-y3)*(y-y3);
    d4=(x-x4)*(x-x4)+(y-y4)*(y-y4);
    //�жϸõ��Ƿ�������
    if(d1>1 && d2>1 && d3>1 && d4>1)
        h=0;
    else
        h=10;
    printf("%d",h);
    return 0;
}