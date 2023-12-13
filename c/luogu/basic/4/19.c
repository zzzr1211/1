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
				if(flag) //在判断字符是否为'1'的状态下,出现了'0',则输出结果
				{
					printf(" %d", count);
					flag = 0;
					count = 0;
				}
				count++;
			}
			else
			{
				if(!flag) //在判断字符是否为'0'的状态下,出现了'1',则输出结果 
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
		printf(" %d", count); //压缩码里的最后一个数  
	}
	
	return 0;
} 
