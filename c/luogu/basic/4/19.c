#include <stdio.h>

int main(void)
{
	char map[200][201];
	int i,j;
	int flag = 0,r = 0,count = 0;
	
	while(scanf("%s", map[r]) != EOF)
	{
		r++;
	}
	printf("%d", r);
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < r; j++)
		{
			if(map[i][j] == '0')
			{
				if(flag) //���ж��ַ��Ƿ�Ϊ'1'��״̬��,������'0',��������
				{
					printf(" %d", count);
					flag = 0;
					count = 0;
				}
				count++;
			}
			else
			{
				if(!flag) //���ж��ַ��Ƿ�Ϊ'0'��״̬��,������'1',�������� 
				{
					printf(" %d", count);
					count = 0;
					flag = 1;
				}
				count++;
			}
		}
	}
	if(count > 0)
	{
		printf(" %d", count); //ѹ����������һ����  
	}
	
	return 0;
} 
