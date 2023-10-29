#include <stdio.h>
int main ()
{
	int n,i;
	scanf("%d",&n);
	
	char a;
	float b,res;
	for(i=0;i<n;i++)
	
    {
		getchar();
		scanf("%c %f",&a,&b);
		if(a=='M')res=b/1.09;
		else res=b*1.09;
		
		printf("%.2f\n",res);
	}
}