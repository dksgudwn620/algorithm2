#include <stdio.h>
#define SIZE 8

int main(void) {
    int arr[SIZE] = {12, 3, 45, 7, 2, 19, 8, 5};
    int min = arr[0], idx = 0;

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
            idx = i;
        }
    }

    printf("ÃÖ¼Ú°ª: %d (ÀÎµ¦½º %d)\n", min, idx);
    return 0;
}
