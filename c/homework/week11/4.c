#include<stdio.h>
int main()	
{
	int n;
	int x=1;
	scanf("%d",&n);
	int i=0;
	int arr[n];
	int sum[1000]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum[0]=arr[0];
	printf("%d %d\n",arr[0],x);
	for(i=1;i<n;i++)
	{
		int j;
        int flag=0;
		for(j=0;j<x;j++)
		{
			if(arr[i]+sum[j]<=100)
			{
                sum[j]=arr[i]+sum[j];
				printf("%d %d\n",arr[i],j+1);
                flag=1;
				break;
			}
		}
        if(flag==0)
			{
				x++;
				printf("%d %d\n",arr[i],x);
		}
	}
	printf("%d",x);
	return 0;
}