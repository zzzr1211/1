#include <stdio.h>

int main(void)
{
    int N, number, top, bott, min, loca;
    int a[15] = { -3, -1, 0, 1, 2, 4, 6, 7, 8, 9, 12, 19, 21, 23, 50};
    N = 15;
    scanf("%d", &number);
    loca = 0; top = 0; bott = N - 1;
    if ((number < a[0]) || (number > a[N - 1]))
        loca = -1;
    while ((loca == 0) && (top <= bott)) {
        min = 
min =(top+bott)/2; 
;
        if (number == a[min]) {
            loca = min;
            printf("The serial number is %d\n", loca + 1);
        break;
        } else if (number < a[min])bott = min - 1;
        else top=min+1;

    }
    if (
loca==-1||bott<top
)
        printf("%d isn't in table\n", number);
    return 0;
}