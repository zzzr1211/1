#include <stdio.h>
#include <string.h>

void multihigh(char a[],char b[],char res[]);

int main ()
{
    char a[2005],b[2005],c[2005];
    scanf("%s %s",a,b);
    
    multihigh(a,b,c);

    puts(c);
}

void multihigh(char a[],char b[],char res[])
{
	int lenth_a=strlen(a), lenth_b=strlen(b);
    int a_num[2005],b_num[2005],res_num[2005];
 
    for(int i=0;i<2005;i++)
        a_num[i]=b_num[i]=res_num[i]=0;
 
 
    for(int i=1;i<=lenth_a;i++) a_num[i]=a[lenth_a-i]-'0';
    for(int i=1;i<=lenth_b;i++) b_num[i]=b[lenth_b-i]-'0';
//-----------------------------------------------核心代码
    for(int i=1;i<=lenth_a;i++)//通过两重的循环实现每次数乘完之后都要乘10
        {
            for(int j=1;j<=lenth_b;j++)
            {
                res_num[i+j-1]+=a_num[i]*b_num[j];//i+j-1表示结果的位数
            }
        }//a，b的每一位相乘
            
    for(int i=1;i<lenth_a+lenth_b;i++)//十进制处理，大于10模除进位
        {
            if(res_num[i]>=10){
                res_num[i+1]+=res_num[i]/10;
                res_num[i]%=10;
            }
        }
    int lenth_max=lenth_a+lenth_b;//两数相乘后，结果的位数不会比两加数的位数之和大，方便后面找位数时降低循环次数
    
    while(res_num[lenth_max]==0&&lenth_max>1) lenth_max--;//从后找第一个非0的元素即为最高位数，从前找0不行；
 
//-------------------------------------------------核心代码
    for(int i=lenth_max,j=0;i>0;i--,j++) 
    {
        res[j]=res_num[i]+'0';
    }
        res[lenth_max]='\0';
}