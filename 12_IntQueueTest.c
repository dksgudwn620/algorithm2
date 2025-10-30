// int?�� ?�� IntQueue�? ?��?��?��?�� ?��로그?��
#include <stdio.h>
#include "12_IntQueue.h"

int main(void)
{
    IntQueue que;

    if (Initialize(&que, 64) == -1) {
        puts("?��?�� ?��?��?�� ?��?��?��????��?��?��.");
        return 1;
    }
    while (1) {
        int m, x;

        printf("?��?�� ?��?��?�� ?��: %d / %d\n", Size(&que), Capacity(&que));
        printf("(1)?��?�� (2)?��?�� (3)?��?�� (4)출력 (0)종료: ");
        scanf("%d", &m);

        if (m == 0) break;
        switch (m) {
         case 1: /*--- ?��?�� ---*/
                 printf("?��?��?��: ");   scanf("%d", &x);
                 if (Enque(&que, x) == -1)
                    puts("\a?���?: ?��?��?�� ?��?��?��????��?��?��.");
                 break;

         case 2: /*--- ?��?�� ---*/
                 if (Deque(&que, &x) == -1)
                    puts("\a?���?: ?��?��?�� ?��?��?��????��?��?��.");
                 else
                    printf("?��?��?�� ?��?��?��?�� %d?��?��?��.\n", x);
                 break;

         case 3: /*--- ?��?�� ---*/
                 if (Peek(&que, &x) == -1)
                    puts("\a?���?: ?��?��?�� ?��?��?��????��?��?��.");
                 else
                    printf("?��?��?�� ?��?��?��?�� %d?��?��?��.\n", x);
                 break;

         case 4: /*--- 출력 ---*/
                 Print(&que);
                 break;
        }
    }
    Terminate(&que);
    return 0;
}
