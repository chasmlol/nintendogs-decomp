#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(u32 a, s32 b);
extern void func_0203e908(u8 *p, u32 v);

void func_ov003_02172b88(u8 *param_1)
{
    s32 iVar1;
    u8 *q;
    iVar1 = func_ov003_02174844(param_1, 1, 81, 82, 83, 84, 100);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_02039cc4(param_1);
    if (iVar1 != 0) {
        q = (u8 *)func_020bc3c4() + 136;
        *(u32 *)(q + 0x6c) = 0;
        func_020bbe14(2, (s8)param_1[0x88]);
    }
    if (*(u16 *)(param_1 + 0xf4) >= 79 && *(u16 *)(param_1 + 0xf4) < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_0203e908(param_1, 9);
}
