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

/* ���ύ�Ĵ��뽫��Ƕ������ */
void Show(int number, char symbol)
{
    if(number>0){
        printf("%c",symbol);
        Show(number-1,symbol);
    }
}