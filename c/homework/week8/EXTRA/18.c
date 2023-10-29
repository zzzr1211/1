#include <stdio.h>

int main() {
    int a, x, y;
    scanf("%d %d %d", &a, &x, &y);

    switch (a) {
        case 1:
            printf("%d", x + y);
            break;
        case 2:
            printf("%d", x - y);
            break;
        case 3:
            printf("%d", x * y);
            break;
        case 4:
            printf("%.1f", (float)x / y);
            break;
        case 5:
            printf("%d", x ^ y);
            break;
        default:
            printf("orzzgg");
            break;
    }
}
