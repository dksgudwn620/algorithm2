#include <stdio.h>
#define SIZE 10  // �迭 ũ�� ����

int main(void) {
    int arr[SIZE];
    int n;
    printf("�� �� �Է��ұ��? (�ִ� %d): ", SIZE);
    scanf("%d", &n);

    if (n > SIZE) n = SIZE;

    for (int i = 0; i < n; i++) {
        printf("%d��° ��: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    printf("���: %.2f\n", (double)sum / n);
    return 0;
}
