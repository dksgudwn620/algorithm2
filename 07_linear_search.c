#include <stdio.h>
#define SIZE 6

int main(void) {
    int arr[SIZE] = {10, 20, 30, 40, 50, 60};

    printf("���� ���: ");
    for (int i = SIZE - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
