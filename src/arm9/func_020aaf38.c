#include "ctx.h"

extern u32 data_02159444;
typedef struct { u32 a; u32 b; u32 c; } T3;
s32 func_0200b8a0(s32 a, u32 *b, T3 *c);

u32 func_020aaf38(u8 *param_1, s32 param_2, s32 param_3)
{
    u8 *iVar1;
    T3 loc;

    iVar1 = (u8 *)data_02159444;
    if ((*(u16 *)(iVar1 + 0x84) & 1) != 0) {
        loc = *(T3 *)(iVar1 + 0x9c);
        iVar1 = (u8 *)func_0200b8a0(param_2, (u32 *)(*(u32 *)(param_1 + 0x1c) + 0x30), &loc);
        if ((s32)iVar1 < param_3) {
            return 1;
        }
    }
    return 0;
}
