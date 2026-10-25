#include "ctx.h"

typedef struct E { struct N *a; struct N *b; } E;
typedef struct N { u8 pad[4]; struct N *next4; u8 pad2[16]; struct N *next18; } N;
typedef struct P { u8 pad[0x18]; E e[4]; } P;

extern void func_02089c08(void);
extern void func_02089bf4(void);
extern void func_020800f0(void *p, u32 n);

void func_0208ade4(P *param_1)
{
    s32 i;
    N *head;
    N *r3;
    N *nx;
    E *r5;

    func_02089c08();
    r5 = &param_1->e[0];
    for (i = 0; i < 4; i++) {
        head = param_1->e[i].a;
        if (head != NULL) {
            if ((N *)r5 == head->next18) {
                head->next18 = param_1->e[i].b;
                func_020800f0(head, 60);
            } else {
                r3 = head->next18;
                if (r3 != NULL) {
                    do {
                        nx = r3->next4;
                        if ((N *)r5 == nx) {
                            break;
                        }
                        r3 = nx;
                    } while (nx != NULL);
                }
                r3->next4 = param_1->e[i].b;
                func_020800f0(r3, 8);
            }
        }
        r5 = r5 + 1;
    }
    func_02089bf4();
}
