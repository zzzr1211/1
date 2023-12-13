#include<stdio.h>
void hano(int n,char x,char y,char z);
void print_move(int n,char x,char y);
int main ()
{
	int n;
	char x,y,z;
	scanf("%d\n",&n);
	scanf("%c %c %c ",&x,&y,&z);
	hano(n,x,y,z);
}
void hano(int n,char x,char y,char z)
{
	if (n==1)
    {
        print_move(1,x,y);
    }else{
        hano(n-1,x,z,y);
        print_move(n,x,y);
        hano(n-1,z,y,x);
    }    
}
void print_move(int n,char x,char y)
{
    printf("%d: %c -> %c\n",n,x,y);
}