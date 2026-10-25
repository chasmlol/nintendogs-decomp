#include "ctx.h"
extern void func_02081bf4(int p);

typedef struct {
    int pad0;
    int *head;
    int pad1[11];
    int *cur;
    u32 val;
} Ctx;

void func_020812a0(int param_1, u32 param_2)
{
    Ctx *c = (Ctx *)param_1;
    int *piVar1;
    *(u16 *)0x04000060 = (*(u16 *)0x04000060 & ~0x3000) | 8;
    c->val = param_2;
    piVar1 = c->head;
    if (piVar1 != 0) {
        do {
            c->cur = piVar1;
            if ((((u32)piVar1[7] << 28) >> 31) == 0) {
                func_02081bf4(param_1);
            }
            piVar1 = (int *)*piVar1;
        } while (piVar1 != 0);
    }
}
