#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
    
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int IsTheNumber ( const int N )
{
    int ret=0;
    int a = (int)sqrt(N);//ȡƽ����������
    int b[10]={0};
    int n=N;
    if (N==a*a)//����Ƿ�Ϊ��ȫƽ����
    {
        while (n>0)
        {
            int c=n%10;
            n=n/10;
            if (b[c]==0)//����Ƿ�����ظ�����
            {
                b[c]=1;//��¼ÿһ�����ֹ�������
            }else ret=1;
            
        }
        
    }
    
    
    return ret;
}
