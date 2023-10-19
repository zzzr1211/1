#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
    
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
void Print_Factorial ( const int N )
{
    int num[3000]={0};
    if (N<0)
    {
        printf("Invalid input");
    }else{
        num[0]=1;
        for (int i = 1; i <=N; i++)
        {
            for (int l = 0; l < N; l++)
            {
                num[l]*=i;//乘法分配率
            }
            
            for (int j = 0; j <N; j++)
            {
                while (num[j]>=10000)
                {
                    num[j]-=10000;
                    num[j+1]+=1;
                }//每个表示四位数                
            }            
        }
        int a=0;//检测是否为第一个
        for (int k =N; k>=0; k--)
        {
            if (num[k]>0||a==1)
            {
                if (a==0)
                {
                    printf("%d",num[k]);
                    a=1;
                }else{
                    printf("%04d",num[k]);
                }
            }
        }
        
    }
    
}