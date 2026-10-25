#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_0203579c(u8 *p, s32 v);
s32 func_02028124(u8 *p);
s32 func_02035770(u8 *p, s32 v);
s32 func_02035744(u8 *p, s32 v);
s32 func_ov003_02175458(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
s32 func_0203567c(u8 *p);
void func_0203e908(u8 *p, s16 v);

void func_ov003_02175214(u8 *param_1)
{
    s32 iVar1;
    s32 uVar2;

    iVar1 = func_0203579c(param_1, 3);
    if (iVar1 != 0) {
        uVar2 = func_02028124(param_1);
        *(s32 *)(param_1 + 0x25c) = FX_Mul(uVar2, -32);
        *(s32 *)(param_1 + 0x264) = -(*(s32 *)(param_1 + 0x25c) << 3);
    }
    iVar1 = func_02035770(param_1, 3);
    if (iVar1 == 0) goto zero;
    iVar1 = func_02035744(param_1, 20);
    if (iVar1 != 0) {
        iVar1 = 1;
        goto join;
    }
zero:
    iVar1 = 0;
join:
    iVar1 = func_ov003_02175458(param_1, 944, 1, 512, 0, 0, 0, iVar1, 0);
    if (iVar1 == 0) {
        iVar1 = func_0203567c(param_1);
        if (iVar1 != 0) {
            func_0203e908(param_1, 0x3b2);
        }
    }
}
