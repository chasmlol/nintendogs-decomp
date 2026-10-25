#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern s32 func_02039cc4(u8 *p);
extern void func_020bbe14(u32 a, s32 b);
extern void func_02039c68(u8 *p);

void func_ov003_02169434(u8 *param_1)
{
    s32 iVar1;

    *(u16 *)(param_1 + 0x152) = 0x126;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 0x1c, 1);
    iVar1 = func_02039cc4(param_1);
    if (iVar1 != 0) {
        func_020bbe14(10, *(s8 *)(param_1 + 0x88));
        func_02039c68(param_1);
    }
}
