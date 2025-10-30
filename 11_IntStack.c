// int?�� ?��?�� IntStack(?��?��)
#include <stdio.h>
#include <stdlib.h>
#include "11_IntStack.h"

/*--- ?��?�� 초기?�� ---*/
int Initialize(IntStack *s, int max)
{
    s->ptr = 0;
    if ((s->stk = calloc(max, sizeof(int))) == NULL) {
        s->max = 0;                     // 배열?�� ?��?��?�� ?��?��
        return -1;
    }
    s->max = max;
    return 0;
}

/*--- ?��?��?�� ?��?��?�� ?��?�� ---*/
int Push(IntStack *s, int x)
{
    if (s->ptr >= s->max)               // ?��?��?�� �??�� �?
         return -1;
    s->stk[s->ptr++] = x;
    return 0;
}

/*--- ?��?��?��?�� ?��?��?���? ?���? ---*/
int Pop(IntStack *s, int *x)
{
    if (s->ptr <= 0)                    // ?��?��?�� 비어 ?��?��
        return -1;
    *x = s->stk[--s->ptr];
    return 0;
}

/*--- ?��?��?��?�� ?��?��?�� ?��보기 ---*/
int Peek(const IntStack *s, int *x)
{
    if (s->ptr <= 0)                    // ?��?��?�� 비어 ?��?��
        return -1;
    *x = s->stk[s->ptr - 1];
    return 0;
}

/*--- ?��?��?�� 모든 ?��?�� ?��?�� ---*/
void Clear(IntStack *s)
{
    s->ptr = 0;
}

/*--- ?��?�� ?��?�� ---*/
int Capacity(const IntStack *s)
{
    return s->max;
}

/*--- ?��?��?�� ?��?�� ?��?�� ?��?��?�� ?�� ---*/
int Size(const IntStack *s)
{
    return s->ptr;
}

/*--- ?��?��?�� 비어 ?��?���?? ---*/
int IsEmpty(const IntStack *s)
{
    return s->ptr <= 0;
}

/*--- ?��?��??? �??�� 찼는�?? ---*/
int IsFull(const IntStack *s)
{
    return s->ptr >= s->max;
}

/*--- ?��?��?��?�� �??�� ---*/
int Search(const IntStack *s, int x)
{
    for (int i = s->ptr - 1; i >= 0; i--)   // �????�?(top) ?�� 바닥(bottom)?���? ?��?�� �??��
        if (s->stk[i] == x)
            return i;       // �??�� ?���?
    return -1;              // �??�� ?��?��
}

/*--- 모든 ?��?��?�� 출력 ---*/
void Print(const IntStack *s)
{
    for (int i = 0; i < s->ptr; i++)        // 바닥(bottom) ?�� �????�?(top)�? ?���?
        printf("%d ", s->stk[i]);
    putchar('\n');
}

/*--- ?��?�� 종료 ---*/
void Terminate(IntStack *s)
{
    if (s->stk != NULL)
        free(s->stk);       // 배열?�� ?��?��
    s->max = s->ptr = 0;
}
