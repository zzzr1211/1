#include <stdio.h>
#include <string.h>

void addhigh(char a[],char b[],char res[]);

int main ()
{
    char a[2005],b[2005],c[2005];
    scanf("%s %s",a,b);
    
    addhigh(a,b,c);

    puts(c);
}

void addhigh(char a[],char b[],char res[])//a,b分别为两个加数的字符串，res返回答案
{
    int a_num[2005],b_num[2005];            //保存字符串a,b的数组
    for(int i=0;i<2005;i++)                 //初始化，保证开始每位上数字为0
        a_num[i]=0,b_num[2005]=0;
 
//因为在竖式运算中我们是从低位算起，所以我们倒序将a,b存到数组里
    for(int i=strlen(a)-1,j=0;i>=0;i--,j++) //倒序将a保存为数组，方便每一位的模拟
        a_num[j]=a[i]-'0';
    for(int i=strlen(b)-1,j=0;i>=0;i--,j++) //倒序将b保存为数组，方便每一位的模拟
        b_num[j]=b[i]-'0';


    int lenth_max = strlen(a)>strlen(b)?strlen(a):strlen(b); //计算长度，方便记录位数
    
    for(int i=0;i<lenth_max;i++) //加法运算的核心，其他（乘法减法）都是这里来实现
    {
        a_num[i]+=b_num[i];                 //a的每一位加上b的每一位；
        if(a_num[i]>=10)                    //因为是十进制，
            a_num[i+1]+=a_num[i]/10;        //下一位加上该为的10的除数，模拟进位
            a_num[i]=a_num[i]%10;           //大于十我们需要取10的模数，
    }//提示，如果是其他进制，只需要将10变为其他数
    if(a_num[lenth_max]!=0) //因为加法最多只能进一位
        lenth_max++;
    for(int i=lenth_max-1,j=0;i>=0;i--,j++)//将结果转移到字符串中
        res[j]=a_num[i]+'0';
    res[lenth_max]='\0';//将结果后打上终止符方便输出
}