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

/* 你的代码将被嵌在这里 */
int IsTheNumber ( const int N )
{
    int ret=0;
    int a = (int)sqrt(N);//取平方根的整数
    int b[10]={0};
    int n=N;
    if (N==a*a)//检测是否为完全平方数
    {
        while (n>0)
        {
            int c=n%10;
            n=n/10;
            if (b[c]==0)//检测是否出现重复数字
            {
                b[c]=1;//记录每一个出现过的数字
            }else ret=1;
            
        }
        
    }
    
    
    return ret;
}
