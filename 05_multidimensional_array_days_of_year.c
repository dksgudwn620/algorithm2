#include <stdio.h>



int main(void) {
    int days[12][2] = {
        {31, 31}, {28, 29}, {31, 31}, {30, 30},
        {31, 31}, {30, 30}, {31, 31}, {31, 31},
        {30, 30}, {31, 31}, {30, 30}, {31, 31}
    };

    int year, month;
    printf("������ ���� �Է�(��: 2025 10): ");
    scanf("%d %d", &year, &month);

    int leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    printf("%d�� %d���� %d�ϱ��� �ֽ��ϴ�.\n", year, month, days[month - 1][leap]);
    return 0;
}
