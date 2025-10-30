#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int n;
    printf("배열 크기 입력: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("메모리 할당 실패!\n");
        return 1;
    }

    printf("%d개의 정수를 입력: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("입력된 배열: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}