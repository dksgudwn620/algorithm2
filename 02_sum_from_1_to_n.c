#include <stdio.h>


int main(void) {
    int n, sum = 0;
    printf("n�� �Է��ϼ���: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
    return 0;
}
