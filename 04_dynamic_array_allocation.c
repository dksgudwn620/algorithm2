#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int n;
    printf("�迭 ũ�� �Է�: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("�޸� �Ҵ� ����!\n");
        return 1;
    }

    printf("%d���� ������ �Է�: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("�Էµ� �迭: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}