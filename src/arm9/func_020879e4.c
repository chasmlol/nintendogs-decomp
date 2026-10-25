#include "ctx.h"

extern s32 func_020870b8(u8 *p, s32 a, s32 b, s32 c);
extern void func_02087248(u8 *p, s32 a);
extern u64 func_02087ad0(s32 a);
extern void func_02087a2c(u32 a, u32 b);

BOOL func_020879e4(u8 *param_1, u32 unused, u32 param_3, u32 param_4)
{
    s32 iVar1;
    u64 t;

    iVar1 = func_020870b8(param_1, *(s32 *)(param_1 + 0x10), param_3, param_4);
    func_02087248(param_1, iVar1);
    t = func_02087ad0(*(s32 *)(param_1 + 8));
    if ((u32)t != 0) {
        func_02087a2c((u32)t, (u32)(t >> 32));
    }
    return *(s32 *)(param_1 + 0x14) == 0;
}
