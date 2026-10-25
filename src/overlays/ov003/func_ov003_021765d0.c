#include "ctx.h"

extern s32 func_0203579c(u8 *p, u32 v);
extern s32 func_02028124(u8 *p);
extern s32 func_ov003_02176714(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_021765d0(u8 *param_1)
{
    s32 iVar1;
    s32 uVar2;
    s64 t;

    iVar1 = func_0203579c(param_1, 3);
    if (iVar1 != 0) {
        uVar2 = func_02028124(param_1);
        t = (s64)uVar2 * -32 + 0x800;
        *(u32 *)(param_1 + 0x25c) = (u32)(t >> 12);
        *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -8;
    }
    iVar1 = func_ov003_02176714(param_1);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    func_0203e908(param_1, 0x3a8);
}
