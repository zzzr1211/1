#include <stdio.h>

#define PI 3.14

typedef struct {
    int index;
    double radius;
    double volume;
} Bubble;

void bubbleSort(Bubble arr[], int n)
{
    Bubble temp;
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j].volume < arr[j+1].volume) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    Bubble bubbles[N];
    for (int i = 0; i < N; i++) {
        bubbles[i].index = i+1;
        scanf("%lf", &bubbles[i].radius);
        bubbles[i].volume = 1.33 * PI * bubbles[i].radius * bubbles[i].radius * bubbles[i].radius;
    }
    
    bubbleSort(bubbles, N);
    
    for (int i = 0; i < N; i++) {
        printf("%.2f %d\n", bubbles[i].volume, bubbles[i].index);
    }
    
    return 0;
}
