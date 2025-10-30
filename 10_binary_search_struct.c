#include <stdio.h>
#include <string.h>

/*
 * 예제 10 - 구조체 배열에서 이름 검색 (이진 검색)
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
    printf("검색할 이름 입력: ");
    scanf("%s", key);

    int idx = binary_search(students, n, key);
    if (idx != -1)
        printf("%s의 점수는 %d점입니다.\n", students[idx].name, students[idx].score);
    else
        printf("이름 '%s'을 찾을 수 없습니다.\n", key);

    return 0;
}
