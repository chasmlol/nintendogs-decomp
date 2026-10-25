#include "ctx.h"
extern s32 func_02028124(u8 *p);
extern void func_02025264(u8 *p, u32 a, u32 b);
extern s32 func_0203567c(u8 *p);
extern void func_0202fd7c(u8 *p);
void func_0200e9a4(u8 *param_1)
{
    s32 uVar1;
    s64 v;
    s32 iVar2;
    uVar1 = func_02028124(param_1);
    v = (s64)uVar1 * 512 + 0x800;
    func_02025264(param_1, 9, (u32)(v >> 12));
    *(s16 *)(param_1 + 0x152) = *(s16 *)(param_1 + 0x148);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        *(s16 *)(param_1 + 0x152) = 0;
        func_0202fd7c(param_1);
        return;
    }
}
