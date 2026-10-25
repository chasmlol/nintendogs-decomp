#include "ctx.h"

extern s32 func_02028124(int);
extern void func_0203e908(int, s32);

s32 func_ov004_02168c0c(int param_1, void *param_2, s32 param_3, s32 param_4)
{
    s32 iVar2;
    s64 lVar1;
    s32 uVar4;

    if (param_2 == NULL) {
        return 0;
    }
    if (*(s16 *)((u8 *)param_2 + 0x96) == 20) {
        iVar2 = func_02028124(param_1);
        if (param_3 < iVar2 * 4) {
            func_0203e908(param_1, 0x4c3);
            return 1;
        }
        return 0;
    }
    iVar2 = func_02028124(param_1);
    lVar1 = (s64)(param_4 + 0x1000) * (s64)iVar2 + 0x800;
    uVar4 = (s32)(lVar1 >> 12);
    lVar1 = (s64)uVar4 * (s64)uVar4 + 0x800;
    if (param_3 > (s32)(lVar1 >> 12)) {
        func_0203e908(param_1, 0x4c2);
        return 1;
    }
    func_0203e908(param_1, 0x4c0);
    return 1;
}
