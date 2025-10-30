#include <stdio.h>
#define SIZE 7

int main(void) {
    int arr[SIZE] = {3, 8, 2, 7, 5, 9, 1};
    int key;
    printf("찾을 값 입력: ");
    scanf("%d", &key);

    int found = -1;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("%d는 %d번째 인덱스에 있습니다.\n", key, found);
    else
        printf("찾을 수 없습니다.\n");

    return 0;
}
