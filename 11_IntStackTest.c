// int?˜• ?Š¤?ƒ IntStack?˜ ?‚¬?š©
#include <stdio.h>
#include "11_IntStack.h"

int main(void)
{
    IntStack s;
    if (Initialize(&s, 64) == -1) {
        puts("?Š¤?ƒ ?ƒ?„±?— ?‹¤?Œ¨?–ˆ?Šµ?‹ˆ?‹¤.");
        return 1;
    }

    while (1) {
        int menu, x;
        printf("?˜„?¬ ?°?´?„° ?ˆ˜: %d / %d\n", Size(&s), Capacity(&s));
        printf("(1)?‘¸?‹œ (2)?Œ (3)?”¼?¬ (4)ì¶œë ¥ (0)ì¢…ë£Œ: ");
        scanf("%d", &menu);

        if (menu == 0) break;
        switch (menu) {
         case 1: /*--- ?‘¸?‹œ ---*/
                 printf("?°?´?„°: ");
                 scanf("%d", &x);
                 if (Push(&s, x) == -1)
                    puts("\a?˜¤ë¥?: ?‘¸?‹œ?— ?‹¤?Œ¨?–ˆ?Šµ?‹ˆ?‹¤.");
                 break;

         case 2: /*--- ?Œ ---*/
                 if (Pop(&s, &x) == -1)
                    puts("\a?˜¤ë¥?: ?Œ?— ?‹¤?Œ¨?–ˆ?Šµ?‹ˆ?‹¤.");
                 else
                    printf("?Œ ?°?´?„°?Š” %d?…?‹ˆ?‹¤.\n", x);
                 break;

         case 3: /*--- ?”¼?¬ ---*/
                 if (Peek(&s, &x) == -1)
                    puts("\a?˜¤ë¥?: ?”¼?¬?— ?‹¤?Œ¨?–ˆ?Šµ?‹ˆ?‹¤.");
                 else
                    printf("?”¼?¬ ?°?´?„°?Š” %d?…?‹ˆ?‹¤.\n", x);
                 break;

         case 4: /*--- ì¶œë ¥ ---*/
                 Print(&s);
                 break;
        }
    }
    Terminate(&s);
    return 0;
}
