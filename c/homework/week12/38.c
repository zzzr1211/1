#include<stdio.h>

int main ()
{
    int n,m,a[10][10]={0},room_number,row,col,max=0,count;
    scanf("%d%d",&n,&m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&room_number);
        col=room_number%10;
        row=room_number/100;

        for (int j = 1; j <=n; j++)a[row][j]++;//��һ���
        for (int j = 1; j <=n; j++)a[j][col]++;//��һ�е�
        a[row][col]++;//ȥ���ظ�����
        count=0;
        for (int x = 1; x <=n; x++)
        {
            for (int y = 1; y <=n; y++) if(a[x][y]%2!=0) count++;
        }
        if (count>max)max=count;

    }
        
    printf("%d",max);
}
    