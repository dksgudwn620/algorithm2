#include <stdio.h>
#define SIZE 7

int main(void) {
    int arr[SIZE] = {3, 8, 2, 7, 5, 9, 1};
    int key;
    printf("ã�� �� �Է�: ");
    scanf("%d", &key);

    int found = -1;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("%d�� %d��° �ε����� �ֽ��ϴ�.\n", key, found);
    else
        printf("ã�� �� �����ϴ�.\n");

    return 0;
}
