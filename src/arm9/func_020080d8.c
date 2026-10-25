#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern u32 func_01ffdb08(s32 a);

void func_020080d8(u8 *param_1)
{
    u8 *iVar1 = (u8 *)func_01ffdb08(0);
    T12 loc;
    if (iVar1 == 0) {
        return;
    }
    if (param_1 == 0) {
        return;
    }
    loc = *(T12 *)(iVar1 + 0x2e8);
    loc.w[1] = 0;
    *(s32 *)(param_1 + 0x20) = loc.w[0] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
    *(s32 *)(param_1 + 0x24) = loc.w[1] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
    *(s32 *)(param_1 + 0x28) = loc.w[2] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 12);
}
