#include <stdio.h>
#include <string.h>

void addhigh(char a[],char b[]);
void multihigh(char a[],int b);

int main ()
{
    int n;
    char a[10000],b[10000],sum[10000];
    scanf("%d",&n);//n���Ϊ50

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

void addhigh(char sum[],char a[])//a,b�ֱ�Ϊ�����������ַ�����res���ش�
{
    int sum_num[10000]={0},a_num[10000]={0};            //�����ַ���a,b����,��ʼ������֤��ʼÿλ������Ϊ0
        
 
//��Ϊ����ʽ�����������Ǵӵ�λ�����������ǵ���a,b�浽������
    for(int i=strlen(sum)-1,j=0;i>=0;i--,j++) //����a����Ϊ���飬����ÿһλ��ģ��
        sum_num[j]=sum[i]-'0';
    for(int i=strlen(a)-1,j=0;i>=0;i--,j++) //����b����Ϊ���飬����ÿһλ��ģ��
        a_num[j]=a[i]-'0';

    int lenth_sum=strlen(sum), lenth_a=strlen(a);
    int lenth_max = lenth_sum>lenth_a?lenth_sum:lenth_a; //���㳤�ȣ������¼λ��
    
    for(int i=0;i<lenth_max;i++) //�ӷ�����ĺ��ģ��������˷�����������������ʵ��
    {
        sum_num[i]+=a_num[i];                 //a��ÿһλ����b��ÿһλ��
        if(sum_num[i]>=10)                    //��Ϊ��ʮ���ƣ�
            sum_num[i+1]+=sum_num[i]/10;        //��һλ���ϸ�Ϊ��10�ĳ�����ģ���λ
            sum_num[i]=sum_num[i]%10;           //����ʮ������Ҫȡ10��ģ����
    }//��ʾ��������������ƣ�ֻ��Ҫ��10��Ϊ������
    if(sum_num[lenth_max]!=0) //��Ϊ�ӷ����ֻ�ܽ�һλ
        lenth_max++;
    for(int i=lenth_max-1,j=0;i>=0;i--,j++)//�����ת�Ƶ��ַ�����
        {
            sum[j]=sum_num[i]+'0';
        }
    a[lenth_max]='\0';//������������ֹ���������
}


void multihigh(char a[],int b)
{
	int lenth_a=strlen(a);
    int a_num[10000],res_num[10000];
 
    for(int i=0;i<10000;i++)
        a_num[i]=res_num[i]=0;
 
 
    for(int i=1;i<=lenth_a;i++) a_num[i]=a[lenth_a-i]-'0';
//-----------------------------------------------���Ĵ���
    for(int i=1;i<=lenth_a;i++)//ͨ�����ص�ѭ��ʵ��ÿ��������֮��Ҫ��10
        {

            res_num[i]+=a_num[i]*b;//i+j-1��ʾ�����λ��
            
        }//a��b��ÿһλ���
            
    for(int i=1;i<lenth_a+2;i++)//ʮ���ƴ�������10ģ����λ
        {
            if(res_num[i]>=10){
                res_num[i+1]+=res_num[i]/10;
                res_num[i]%=10;
            }
        }
    int lenth_max=lenth_a+2;//������˺󣬽����λ���������������λ��֮�ʹ󣬷��������λ��ʱ����ѭ������
    
    while(res_num[lenth_max]==0&&lenth_max>1) lenth_max--;//�Ӻ��ҵ�һ����0��Ԫ�ؼ�Ϊ���λ������ǰ��0���У�
 
//-------------------------------------------------���Ĵ���
    for(int i=lenth_max,j=0;i>0;i--,j++) 
    {
        a[j]=res_num[i]+'0';
    }
    a[lenth_max]='\0';
}