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

void addhigh(char a[],char b[],char res[])//a,b�ֱ�Ϊ�����������ַ�����res���ش�
{
    int a_num[2005],b_num[2005];            //�����ַ���a,b������
    for(int i=0;i<2005;i++)                 //��ʼ������֤��ʼÿλ������Ϊ0
        a_num[i]=0,b_num[2005]=0;
 
//��Ϊ����ʽ�����������Ǵӵ�λ�����������ǵ���a,b�浽������
    for(int i=strlen(a)-1,j=0;i>=0;i--,j++) //����a����Ϊ���飬����ÿһλ��ģ��
        a_num[j]=a[i]-'0';
    for(int i=strlen(b)-1,j=0;i>=0;i--,j++) //����b����Ϊ���飬����ÿһλ��ģ��
        b_num[j]=b[i]-'0';


    int lenth_max = strlen(a)>strlen(b)?strlen(a):strlen(b); //���㳤�ȣ������¼λ��
    
    for(int i=0;i<lenth_max;i++) //�ӷ�����ĺ��ģ��������˷�����������������ʵ��
    {
        a_num[i]+=b_num[i];                 //a��ÿһλ����b��ÿһλ��
        if(a_num[i]>=10)                    //��Ϊ��ʮ���ƣ�
            a_num[i+1]+=a_num[i]/10;        //��һλ���ϸ�Ϊ��10�ĳ�����ģ���λ
            a_num[i]=a_num[i]%10;           //����ʮ������Ҫȡ10��ģ����
    }//��ʾ��������������ƣ�ֻ��Ҫ��10��Ϊ������
    if(a_num[lenth_max]!=0) //��Ϊ�ӷ����ֻ�ܽ�һλ
        lenth_max++;
    for(int i=lenth_max-1,j=0;i>=0;i--,j++)//�����ת�Ƶ��ַ�����
        res[j]=a_num[i]+'0';
    res[lenth_max]='\0';//������������ֹ���������
}