#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main(void) {
    int x, y, z;
    printf("�� ������ �Է��ϼ���: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("�ִ��� %d�Դϴ�.\n", max3(x, y, z));
    return 0;
}
