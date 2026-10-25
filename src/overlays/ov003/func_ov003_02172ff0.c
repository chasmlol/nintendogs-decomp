#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(u32 a, s32 b);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_02172ff0(u8 *param_1)
{
    s32 iVar1;
    u16 x;
    u8 *t;

    iVar1 = func_ov003_02174844(param_1, 1, 0x4d, 0x4e, 0x4f, 0x50, 100);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_02039cc4(param_1);
    if (iVar1 != 0) {
        t = (u8 *)func_020bc3c4() + 136;
        *(u32 *)(t + 0x6c) = 0;
        func_020bbe14(2, *(s8 *)(param_1 + 0x88));
    }
    x = *(u16 *)(param_1 + 0xf4);
    if (x >= 79 && x < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_0203e908(param_1, 3);
}
