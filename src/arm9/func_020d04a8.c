#include "ctx.h"

extern void func_020cdb74(u32 *a, u32 *b, u32 *c, u16 *d, u16 *e);

typedef struct { u32 w[3]; } T3;

void func_020d04a8(u32 *param_1, u32 *param_2)
{
    func_020cdb74(param_1, param_1 + 3, param_2 + 7, (u16 *)(param_2 + 6), (u16 *)((u8 *)param_2 + 0x1a));
    *(T3 *)param_2 = *(T3 *)(param_1 + 3);
    *(T3 *)(param_2 + 3) = *(T3 *)(param_1 + 6);
    param_2[8] = param_1[9];
}
