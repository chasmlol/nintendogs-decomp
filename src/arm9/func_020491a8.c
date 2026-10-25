#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern BOOL func_02049304(u8 *p, s32 *a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_02035770(u8 *p, s32 n);
extern s32 func_02028130(u8 *p);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_0203567c(u8 *p);

void func_020491a8(u8 *param_1)
{
    s32 local_8;
    s32 iVar2;
    s32 uVar3;

    local_8 = 0;
    if (func_02049304(param_1, &local_8, 1, 180, 180, 0x29a)) {
        return;
    }
    iVar2 = func_02035770(param_1, 20);
    if (iVar2 != 0) {
        uVar3 = func_02028130(param_1);
        if (local_8 > FX_Mul(uVar3, 0x300c)) {
            func_0203e908(param_1, 0x299);
            return;
        }
    }
    iVar2 = func_02035770(param_1, 45);
    if (iVar2 != 0) {
        uVar3 = func_02028130(param_1);
        if (local_8 > FX_Mul(uVar3, 0x1cd4)) {
            func_0203e908(param_1, 0x297);
            return;
        }
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0203e908(param_1, 664);
        return;
    }
}
