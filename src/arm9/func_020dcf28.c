#include "ctx.h"

extern s32 func_020dc7b4(u32 a, u32 *b, u32 c, s32 d);
extern s32 func_020dc2d8(u16 *p, u32 a, u32 b);
extern void func_020dbe68(u16 *p, u32 a, u32 b, s32 c);

s32 func_020dcf28(u8 *param_1, u32 param_2, u32 *param_3, u32 param_4, volatile s16 param_5)
{
    s32 iVar1;
    s32 iVar2;

    iVar1 = func_020dc7b4(param_2, param_3, param_4, (s32)param_5);
    if (iVar1 >= 0) {
        iVar2 = func_020dc2d8(*(u16 **)(param_1 + 0x14), param_2, *param_3);
        if (iVar2 == 1) {
            func_020dbe68(*(u16 **)(param_1 + 0x14), param_2, *param_3, (s32)param_5);
            *(u16 *)((u8 *)*(u16 **)(param_1 + 0x14) + 2) = 0x100;
        } else {
            iVar1 = -4;
        }
    }
    return iVar1;
}
