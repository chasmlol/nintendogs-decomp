#include "ctx.h"

extern s32 data_021429fc;
extern u32 data_02142a14;
extern u32 data_02142a10;
extern void func_020c770c(u8 *p, s32 *q, u32 a, u32 b, s32 c);
extern void func_020ab178(u32 a);

void func_020c2cb4(u8 *param_1, s32 *param_2)
{
    u32 *puVar2;
    s64 lVar1;

    puVar2 = *(u32 **)(param_1 + 0x214);
    if (*(s32 *)(param_1 + 0xb4) < 0) {
        lVar1 = (s64)(s32)*puVar2 * (s64)data_021429fc + 0x800;
        *puVar2 = (u32)(lVar1 >> 12);
    }
    if (*(s16 *)(puVar2 + 2) != 1) {
        *(u16 *)(puVar2 + 2) = 1;
        func_020c770c(param_1, param_2, data_02142a14, data_02142a10, 0);
    } else {
        func_020c770c(param_1, param_2, data_02142a14, data_02142a10, -1);
    }
    func_020ab178(0);
}
