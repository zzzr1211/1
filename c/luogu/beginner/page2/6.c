#include <stdio.h>
int main ()
{
    int a, b, f;
    char c;

	scanf("%d %d %c %d", &a, &b, &c, &f);
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if (i != 0 && i != a - 1 && j != 0 && j != b - 1)
				printf("%c", f == 0?' ':c); 
			else printf("%c", c);
		}
		printf("\n");
	}

    
}