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
//-----------------------------------------------���Ĵ���
    for(int i=1;i<=lenth_a;i++)//ͨ�����ص�ѭ��ʵ��ÿ��������֮��Ҫ��10
        {
            for(int j=1;j<=lenth_b;j++)
            {
                res_num[i+j-1]+=a_num[i]*b_num[j];//i+j-1��ʾ�����λ��
            }
        }//a��b��ÿһλ���
            
    for(int i=1;i<lenth_a+lenth_b;i++)//ʮ���ƴ�������10ģ����λ
        {
            if(res_num[i]>=10){
                res_num[i+1]+=res_num[i]/10;
                res_num[i]%=10;
            }
        }
    int lenth_max=lenth_a+lenth_b;//������˺󣬽����λ���������������λ��֮�ʹ󣬷��������λ��ʱ����ѭ������
    
    while(res_num[lenth_max]==0&&lenth_max>1) lenth_max--;//�Ӻ��ҵ�һ����0��Ԫ�ؼ�Ϊ���λ������ǰ��0���У�
 
//-------------------------------------------------���Ĵ���
    for(int i=lenth_max,j=0;i>0;i--,j++) 
    {
        res[j]=res_num[i]+'0';
    }
        res[lenth_max]='\0';
}