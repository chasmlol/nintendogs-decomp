#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_0203567c(u8 *p);
extern void func_ov003_0217b43c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, u32 f, u32 g);
extern s32 func_0203579c(u8 *p, u32 a);
extern s32 func_02028124(u8 *p);
extern void func_02039818(u8 *p);

void func_ov003_0217a3e4(u8 *param_1)
{
    s32 iVar1;
    u32 uVar3;
    s32 c;

    c = *(s8 *)(param_1 + 0x8b);
    if (c == 4) {
        goto yes;
    }
    if (c != 5) {
        goto no;
    }
yes:
    uVar3 = 20;
    goto cont;
no:
    uVar3 = 19;
cont:
    iVar1 = func_0203567c(param_1);
    func_ov003_0217b43c(param_1, 7, 25, 1, 1, iVar1, uVar3, uVar3);
    iVar1 = func_0203579c(param_1, 7);
    if (iVar1 != 0) {
        iVar1 = func_02028124(param_1);
        *(s32 *)(param_1 + 0x25c) = FX_Mul(iVar1, -15);
        *(s32 *)(param_1 + 0x264) = *(volatile s32 *)(param_1 + 0x25c) * -9;
    }
    func_02039818(param_1);
}
