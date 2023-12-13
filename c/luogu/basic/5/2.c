#include<stdio.h>
#include<string.h>
int main(void)
{
	int n, i;
	char a[51];
	scanf("%d", &n);
	scanf("%s", a);
	for (i = 0; i < strlen(a); i++){
		// a[i]+=n ;
        // if (a[i]>'z')
        // {
        //     a[i]-=26;
        // }                »á³¬³öascIIÂë·¶Î§

        a[i] = 97+(a[i]-97+n) % 26;
        }
	printf("%s", a);
	return(0);
}
