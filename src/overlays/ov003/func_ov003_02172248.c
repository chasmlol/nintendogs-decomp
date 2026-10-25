#include "ctx.h"

s32 func_ov003_02174844(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_02039cc4(u8 *p);
void *func_020bc3c4(void);
void func_020bbe14(s32 a, s32 b);
void func_0203e908(u8 *p, s32 v);
s32 func_02023780(u8 *p);
void *func_02024114(u8 *p, s32 v);
u32 func_020293d8(u8 *p, s32 a, s32 b);

u32 func_ov003_02172248(u8 *param_1)
{
    s32 iVar2;
    u16 *psVar3;

    iVar2 = func_ov003_02174844(param_1, 1, 73, 74, 75, 76, 10);
    if (iVar2 == 0) {
        return iVar2;
    }
    iVar2 = func_02039cc4(param_1);
    if (iVar2 != 0) {
        u8 *q = (u8 *)func_020bc3c4() + 136;
        *(u32 *)(q + 0x6c) = 0;
        func_020bbe14(2, *(s8 *)(param_1 + 136));
    }
    func_0203e908(param_1, 6);
    iVar2 = func_02023780(param_1);
    psVar3 = (u16 *)func_02024114(param_1, iVar2);
    if (psVar3 == 0) {
        return (u32)psVar3;
    }
    return func_020293d8(param_1, (s16)(psVar3[0] + 12), *((u8 *)psVar3 + 0x28));
}
