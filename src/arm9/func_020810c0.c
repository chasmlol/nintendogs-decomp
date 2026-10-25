#include "ctx.h"

extern void func_02081104(u8 *a, u32 *b);

void func_020810c0(u8 *param_1)
{
    u32 *p = *(u32 **)(param_1 + 4);
    u32 *next;
    if (p != 0) {
        do {
            next = (u32 *)*p;
            func_02081104(param_1, p);
            p = next;
        } while (next != 0);
    }
}
