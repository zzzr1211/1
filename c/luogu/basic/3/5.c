#include <stdio.h>
#include <string.h>

void addhigh(char a[],char b[]);
void multihigh(char a[],int b);

int main ()
{
    int n;
    char a[10000],b[10000],sum[10000];
    scanf("%d",&n);//n最大为50

    for (int i = 1; i <=n; i++)
    {
        a[0]='1';
        a[1]='\0';
        for (int j = 1; j <=i; j++)
        {
            multihigh(a,j);
        }
        addhigh(sum,a);
    }
    
    printf("%s",sum);
}

void addhigh(char sum[],char a[])//a,b分别为两个加数的字符串，res返回答案
{
    int sum_num[10000]={0},a_num[10000]={0};            //保存字符串a,b的数,初始化，保证开始每位上数字为0
        
 
//因为在竖式运算中我们是从低位算起，所以我们倒序将a,b存到数组里
    for(int i=strlen(sum)-1,j=0;i>=0;i--,j++) //倒序将a保存为数组，方便每一位的模拟
        sum_num[j]=sum[i]-'0';
    for(int i=strlen(a)-1,j=0;i>=0;i--,j++) //倒序将b保存为数组，方便每一位的模拟
        a_num[j]=a[i]-'0';

    int lenth_sum=strlen(sum), lenth_a=strlen(a);
    int lenth_max = lenth_sum>lenth_a?lenth_sum:lenth_a; //计算长度，方便记录位数
    
    for(int i=0;i<lenth_max;i++) //加法运算的核心，其他（乘法减法）都是这里来实现
    {
        sum_num[i]+=a_num[i];                 //a的每一位加上b的每一位；
        if(sum_num[i]>=10)                    //因为是十进制，
            sum_num[i+1]+=sum_num[i]/10;        //下一位加上该为的10的除数，模拟进位
            sum_num[i]=sum_num[i]%10;           //大于十我们需要取10的模数，
    }//提示，如果是其他进制，只需要将10变为其他数
    if(sum_num[lenth_max]!=0) //因为加法最多只能进一位
        lenth_max++;
    for(int i=lenth_max-1,j=0;i>=0;i--,j++)//将结果转移到字符串中
        {
            sum[j]=sum_num[i]+'0';
        }
    a[lenth_max]='\0';//将结果后打上终止符方便输出
}


void multihigh(char a[],int b)
{
	int lenth_a=strlen(a);
    int a_num[10000],res_num[10000];
 
    for(int i=0;i<10000;i++)
        a_num[i]=res_num[i]=0;
 
 
    for(int i=1;i<=lenth_a;i++) a_num[i]=a[lenth_a-i]-'0';
//-----------------------------------------------核心代码
    for(int i=1;i<=lenth_a;i++)//通过两重的循环实现每次数乘完之后都要乘10
        {

            res_num[i]+=a_num[i]*b;//i+j-1表示结果的位数
            
        }//a，b的每一位相乘
            
    for(int i=1;i<lenth_a+2;i++)//十进制处理，大于10模除进位
        {
            if(res_num[i]>=10){
                res_num[i+1]+=res_num[i]/10;
                res_num[i]%=10;
            }
        }
    int lenth_max=lenth_a+2;//两数相乘后，结果的位数不会比两加数的位数之和大，方便后面找位数时降低循环次数
    
    while(res_num[lenth_max]==0&&lenth_max>1) lenth_max--;//从后找第一个非0的元素即为最高位数，从前找0不行；
 
//-------------------------------------------------核心代码
    for(int i=lenth_max,j=0;i>0;i--,j++) 
    {
        a[j]=res_num[i]+'0';
    }
    a[lenth_max]='\0';
}