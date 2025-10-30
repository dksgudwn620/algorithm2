#include <stdio.h>
#define SIZE 5

int main(void) {
    int src[SIZE] = {1, 2, 3, 4, 5};
    int dst[SIZE];

    for (int i = 0; i < SIZE; i++)
        dst[i] = src[i];

    printf("복사된 배열: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", dst[i]);
    printf("\n");

    return 0;
}
