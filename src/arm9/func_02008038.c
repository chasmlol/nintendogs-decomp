#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u8 *func_01ffdb08(s32 idx);

void func_02008038(u8 *param_1)
{
    u8 *r;
    u32 l[3];
    r = func_01ffdb08(1);
    if (r == NULL) {
        return;
    }
    if (param_1 == NULL) {
        return;
    }
    *(T3 *)l = *(T3 *)(r + 744);
    l[1] = 0;
    *(u32 *)(param_1 + 0x20) = l[0] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
    *(u32 *)(param_1 + 0x24) = l[1] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
    *(u32 *)(param_1 + 0x28) = l[2] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 12);
}
