#include <stdio.h>

void Show(int number, char symbol);
void RtPara(int width, int height, char symbol);

int main()
{
    int w, h;
    char s;
    scanf("%d %d %c", &w, &h, &s);
    RtPara(w, h, s);
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
void RtPara(int width, int height, char symbol)
{
    if (width>0&&height>0)
    {     
        Show(height-1,' ');
        Show(width,symbol);
        printf("\n");
        if (height>1)
        {
            
            RtPara(width,height-1,symbol);
        }
    }
    
}