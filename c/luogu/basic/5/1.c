#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[101];
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	printf("%s", a);
}
