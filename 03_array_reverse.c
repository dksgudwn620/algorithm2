#include <stdio.h>
#define SIZE 10  // 배열 크기 고정

int main(void) {
    int arr[SIZE];
    int n;
    printf("몇 개 입력할까요? (최대 %d): ", SIZE);
    scanf("%d", &n);

    if (n > SIZE) n = SIZE;

    for (int i = 0; i < n; i++) {
        printf("%d번째 수: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    printf("평균: %.2f\n", (double)sum / n);
    return 0;
}
