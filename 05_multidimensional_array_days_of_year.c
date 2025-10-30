#include <stdio.h>



int main(void) {
    int days[12][2] = {
        {31, 31}, {28, 29}, {31, 31}, {30, 30},
        {31, 31}, {30, 30}, {31, 31}, {31, 31},
        {30, 30}, {31, 31}, {30, 30}, {31, 31}
    };

    int year, month;
    printf("연도와 월을 입력(예: 2025 10): ");
    scanf("%d %d", &year, &month);

    int leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    printf("%d년 %d월은 %d일까지 있습니다.\n", year, month, days[month - 1][leap]);
    return 0;
}
