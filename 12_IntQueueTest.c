// int?˜• ? IntQueueë¥? ?‚¬?š©?•˜?Š” ?”„ë¡œê·¸?¨
#include <stdio.h>
#include "12_IntQueue.h"

int main(void)
{
    IntQueue que;

    if (Initialize(&que, 64) == -1) {
        puts("??˜ ?ƒ?„±?— ?‹¤?Œ¨?•˜????Šµ?‹ˆ?‹¤.");
        return 1;
    }
    while (1) {
        int m, x;

        printf("?˜„?¬ ?°?´?„° ?ˆ˜: %d / %d\n", Size(&que), Capacity(&que));
        printf("(1)?¸? (2)?””? (3)?”¼?¬ (4)ì¶œë ¥ (0)ì¢…ë£Œ: ");
        scanf("%d", &m);

        if (m == 0) break;
        switch (m) {
         case 1: /*--- ?¸? ---*/
                 printf("?°?´?„°: ");   scanf("%d", &x);
                 if (Enque(&que, x) == -1)
                    puts("\a?˜¤ë¥?: ?¸??— ?‹¤?Œ¨?•˜????Šµ?‹ˆ?‹¤.");
                 break;

         case 2: /*--- ?””? ---*/
                 if (Deque(&que, &x) == -1)
                    puts("\a?˜¤ë¥?: ?””??— ?‹¤?Œ¨?•˜????Šµ?‹ˆ?‹¤.");
                 else
                    printf("?””??•œ ?°?´?„°?Š” %d?…?‹ˆ?‹¤.\n", x);
                 break;

         case 3: /*--- ?”¼?¬ ---*/
                 if (Peek(&que, &x) == -1)
                    puts("\a?˜¤ë¥?: ?”¼?¬?— ?‹¤?Œ¨?•˜????Šµ?‹ˆ?‹¤.");
                 else
                    printf("?”¼?¬?•œ ?°?´?„°?Š” %d?…?‹ˆ?‹¤.\n", x);
                 break;

         case 4: /*--- ì¶œë ¥ ---*/
                 Print(&que);
                 break;
        }
    }
    Terminate(&que);
    return 0;
}
