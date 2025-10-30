#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main(void) {
    int x, y, z;
    printf("세 정수를 입력하세요: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("최댓값은 %d입니다.\n", max3(x, y, z));
    return 0;
}
