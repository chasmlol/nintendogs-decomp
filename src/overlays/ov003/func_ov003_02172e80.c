#include "ctx.h"

s32 func_ov003_02174844(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_02039cc4(u8 *p);
void *func_020bc3c4(void);
void func_020bbe14(s32 a, s32 b);
void func_0203e908(u8 *p, s32 v);

void func_ov003_02172e80(u8 *param_1)
{
    s32 iVar1;
    u8 *q;

    iVar1 = func_ov003_02174844(param_1, 1, 73, 74, 75, 76, 100);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_02039cc4(param_1);
    if (iVar1 != 0) {
        q = (u8 *)func_020bc3c4() + 136;
        *(u32 *)(q + 0x6c) = 0;
        func_020bbe14(2, *(s8 *)(param_1 + 136));
    }
    if (*(u16 *)(param_1 + 244) >= 79 && *(u16 *)(param_1 + 244) < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_0203e908(param_1, 5);
}
