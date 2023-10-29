#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	double s1,s2;
	s1=25+0.1*t;
	if(t<100)
	s2=20;
	else
	s2=0.3*t;
	if(s1>s2)
	printf("2");
	else
	printf("1");
}
