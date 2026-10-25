#include "ctx.h"
extern s32 func_0203567c(u8 *p);
extern void func_ov003_0217b43c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern s32 func_0203579c(u8 *p, u32 a);
extern s32 func_02028124(u8 *p);
extern void func_02039818(u8 *p);
void func_ov003_0217a31c(u8 *param_1)
{
    u8 uVar3;
    s32 iVar1;
    s64 v;
    s32 uVar2;
    s8 v8;
    v8 = *(s8 *)(param_1 + 0x8b);
    if (v8 == 4) {
        goto A;
    }
    if (v8 != 5) {
        goto B;
    }
A:
    uVar3 = 0x14;
    goto C;
B:
    uVar3 = 0x13;
C:
    iVar1 = func_0203567c(param_1);
    func_ov003_0217b43c(param_1, 7, 0x19, 1, 1, iVar1, uVar3, uVar3);
    iVar1 = func_0203579c(param_1, 7);
    if (iVar1 != 0) {
        uVar2 = func_02028124(param_1);
        v = (s64)uVar2 * -15 + 0x800;
        *(u32 *)(param_1 + 0x25c) = (u32)(v >> 12);
        *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -9;
    }
    func_02039818(param_1);
}
