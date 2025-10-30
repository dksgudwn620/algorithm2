// int?˜• ?Š¤?ƒ IntStack(?†Œ?Š¤)
#include <stdio.h>
#include <stdlib.h>
#include "11_IntStack.h"

/*--- ?Š¤?ƒ ì´ˆê¸°?™” ---*/
int Initialize(IntStack *s, int max)
{
    s->ptr = 0;
    if ((s->stk = calloc(max, sizeof(int))) == NULL) {
        s->max = 0;                     // ë°°ì—´?˜ ?ƒ?„±?— ?‹¤?Œ¨
        return -1;
    }
    s->max = max;
    return 0;
}

/*--- ?Š¤?ƒ?— ?°?´?„° ?‘¸?‹œ ---*/
int Push(IntStack *s, int x)
{
    if (s->ptr >= s->max)               // ?Š¤?ƒ?´ ê°??“ ì°?
         return -1;
    s->stk[s->ptr++] = x;
    return 0;
}

/*--- ?Š¤?ƒ?—?„œ ?°?´?„°ë¥? ? œê±? ---*/
int Pop(IntStack *s, int *x)
{
    if (s->ptr <= 0)                    // ?Š¤?ƒ?´ ë¹„ì–´ ?ˆ?Œ
        return -1;
    *x = s->stk[--s->ptr];
    return 0;
}

/*--- ?Š¤?ƒ?—?„œ ?°?´?„° ?—¿ë³´ê¸° ---*/
int Peek(const IntStack *s, int *x)
{
    if (s->ptr <= 0)                    // ?Š¤?ƒ?´ ë¹„ì–´ ?ˆ?Œ
        return -1;
    *x = s->stk[s->ptr - 1];
    return 0;
}

/*--- ?Š¤?ƒ?˜ ëª¨ë“  ?š”?†Œ ?‚­? œ ---*/
void Clear(IntStack *s)
{
    s->ptr = 0;
}

/*--- ?Š¤?ƒ ?š©?Ÿ‰ ---*/
int Capacity(const IntStack *s)
{
    return s->max;
}

/*--- ?Š¤?ƒ?— ?Œ“?—¬ ?ˆ?Š” ?°?´?„° ?ˆ˜ ---*/
int Size(const IntStack *s)
{
    return s->ptr;
}

/*--- ?Š¤?ƒ?´ ë¹„ì–´ ?ˆ?Š”ê°?? ---*/
int IsEmpty(const IntStack *s)
{
    return s->ptr <= 0;
}

/*--- ?Š¤?ƒ??? ê°??“ ì°¼ëŠ”ê°?? ---*/
int IsFull(const IntStack *s)
{
    return s->ptr >= s->max;
}

/*--- ?Š¤?ƒ?—?„œ ê²??ƒ‰ ---*/
int Search(const IntStack *s, int x)
{
    for (int i = s->ptr - 1; i >= 0; i--)   // ê¼????ê¸?(top) ?†’ ë°”ë‹¥(bottom)?œ¼ë¡? ?„ ?˜• ê²??ƒ‰
        if (s->stk[i] == x)
            return i;       // ê²??ƒ‰ ?„±ê³?
    return -1;              // ê²??ƒ‰ ?‹¤?Œ¨
}

/*--- ëª¨ë“  ?°?´?„° ì¶œë ¥ ---*/
void Print(const IntStack *s)
{
    for (int i = 0; i < s->ptr; i++)        // ë°”ë‹¥(bottom) ?†’ ê¼????ê¸?(top)ë¡? ?Š¤ìº?
        printf("%d ", s->stk[i]);
    putchar('\n');
}

/*--- ?Š¤?ƒ ì¢…ë£Œ ---*/
void Terminate(IntStack *s)
{
    if (s->stk != NULL)
        free(s->stk);       // ë°°ì—´?„ ?‚­? œ
    s->max = s->ptr = 0;
}
