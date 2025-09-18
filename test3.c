#include <stdio.h>

int main(void)
{
    int n;

    puts("1부터 n까지의 총합을 구합니다.");

    printf("shdjfkl: ");
    scanf("%d", &n);

    int sum = 0; // 총합
    int i = 1;

    while (i <= n) {
        sum += i; // sum에 i를 추가
        i++;      // i값을 1 증가
    }

    printf("1부터 %d까지의 총합은 %d입니다.\n", n, sum);

    return 0;
}
