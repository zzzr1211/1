#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;
    
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Count_Digit ( const int N, const int D )
{
    int cnt=0;
    int m;
    if (N<0)
    {
        m=-N;
    }else m=N;
    
    do
    {
        int a=m%10;
        if (a==D)
        {
            cnt++;
        }
        m/=10;
    }while (m>0);
    return cnt;

}