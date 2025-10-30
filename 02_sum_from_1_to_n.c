#include <stdio.h>


int main(void) {
    int n, sum = 0;
    printf("n을 입력하세요: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
    return 0;
}
