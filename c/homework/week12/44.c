#include <stdio.h>
int main() {
    int n, a[1110]={0}, b[1110]={0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = i + 1;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) 
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d %d", a[i], b[i]);
        if (i != 0) {
            printf("\n");
        }
    }
    return 0;
}
