#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern void func_020cdc04(u32 *a, u32 *b, u32 c, u32 d, u32 e);

void func_020d0500(u32 *param_1, u32 *param_2)
{
    func_020cdc04(param_2, param_1, param_1[7], *(u16 *)(param_1 + 6), *(u16 *)((u8 *)param_1 + 0x1a));
    *(T12 *)((u8 *)param_2 + 12) = *(T12 *)param_1;
    *(T12 *)((u8 *)param_2 + 24) = *(T12 *)((u8 *)param_1 + 12);
    param_2[9] = param_1[8];
}
