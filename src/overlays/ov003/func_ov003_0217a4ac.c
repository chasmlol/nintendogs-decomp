#include "ctx.h"
extern s32 func_0203567c(u8 *p);
extern void func_ov003_0217b43c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_02039818(u8 *p);
void func_ov003_0217a4ac(u8 *param_1)
{
    u8 uVar2;
    s32 iVar1;
    s8 v;
    v = *(s8 *)(param_1 + 0x8b);
    if (v == 4) {
        goto A;
    }
    if (v != 5) {
        goto B;
    }
A:
    uVar2 = 0x14;
    goto C;
B:
    uVar2 = 0x13;
C:
    iVar1 = func_0203567c(param_1);
    func_ov003_0217b43c(param_1, 5, 0x19, 1, 1, iVar1, uVar2, uVar2);
    func_02039818(param_1);
}
