// int?�� ?��?�� IntStack?�� ?��?��
#include <stdio.h>
#include "11_IntStack.h"

int main(void)
{
    IntStack s;
    if (Initialize(&s, 64) == -1) {
        puts("?��?�� ?��?��?�� ?��?��?��?��?��?��.");
        return 1;
    }

    while (1) {
        int menu, x;
        printf("?��?�� ?��?��?�� ?��: %d / %d\n", Size(&s), Capacity(&s));
        printf("(1)?��?�� (2)?�� (3)?��?�� (4)출력 (0)종료: ");
        scanf("%d", &menu);

        if (menu == 0) break;
        switch (menu) {
         case 1: /*--- ?��?�� ---*/
                 printf("?��?��?��: ");
                 scanf("%d", &x);
                 if (Push(&s, x) == -1)
                    puts("\a?���?: ?��?��?�� ?��?��?��?��?��?��.");
                 break;

         case 2: /*--- ?�� ---*/
                 if (Pop(&s, &x) == -1)
                    puts("\a?���?: ?��?�� ?��?��?��?��?��?��.");
                 else
                    printf("?�� ?��?��?��?�� %d?��?��?��.\n", x);
                 break;

         case 3: /*--- ?��?�� ---*/
                 if (Peek(&s, &x) == -1)
                    puts("\a?���?: ?��?��?�� ?��?��?��?��?��?��.");
                 else
                    printf("?��?�� ?��?��?��?�� %d?��?��?��.\n", x);
                 break;

         case 4: /*--- 출력 ---*/
                 Print(&s);
                 break;
        }
    }
    Terminate(&s);
    return 0;
}
