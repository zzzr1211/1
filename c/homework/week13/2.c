#include <stdio.h>

void Show(int number, char symbol);

int main()
{
    int n;
    char s;
    scanf("%d %c", &n, &s);
    Show(n, s);
    putchar('\n');
    return 0;
}

/* 你提交的代码将被嵌在这里 */
void Show(int number, char symbol)
{
    if(number>0){
        printf("%c",symbol);
        Show(number-1,symbol);
    }
}