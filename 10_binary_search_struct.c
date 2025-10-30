#include <stdio.h>
#include <string.h>

/*
 * ���� 10 - ����ü �迭���� �̸� �˻� (���� �˻�)
 */

typedef struct {
    char name[20];
    int score;
} Student;

int binary_search(Student a[], int n, const char *key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int cmp = strcmp(a[mid].name, key);
        if (cmp == 0)
            return mid;
        else if (cmp < 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(void) {
    Student students[] = {
        {"Alice", 85}, {"Bob", 92}, {"Charlie", 78}, {"David", 90}, {"Eve", 88}
    };
    int n = sizeof(students) / sizeof(students[0]);

    char key[20];
    printf("�˻��� �̸� �Է�: ");
    scanf("%s", key);

    int idx = binary_search(students, n, key);
    if (idx != -1)
        printf("%s�� ������ %d���Դϴ�.\n", students[idx].name, students[idx].score);
    else
        printf("�̸� '%s'�� ã�� �� �����ϴ�.\n", key);

    return 0;
}
