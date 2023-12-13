#include <stdio.h>

int main(void) {
    int x[4][4], n = 0, i, j;
    for (j = 0; j < 4; j++)
        for (i = 3; i >= j;  
i--
  ) {
            n++;
            x[i][j] =  
n
     ;
        }
    for (i = 0; i < 4; i++) {
        for (j = 0; j <= i; j++)
            printf("%3d", x[i][j]);
        printf("\n");
    }
    return 0;
}