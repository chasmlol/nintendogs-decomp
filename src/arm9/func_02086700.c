#include "ctx.h"

extern s32 func_02087008(u32 *a, u32 *b, u32 c);
extern s32 func_020870b8(u32 *p, u32 a, u32 b);

s32 func_02086700(u32 *param_1)
{
    u8 *iStack_18;
    u32 out[2];
    u32 st[2];
    u32 iVar3;
    u32 uVar1;
    u32 iVar2;
    u32 t;

    iStack_18 = (u8 *)param_1[2];
    iVar3 = param_1[0xc];
    uVar1 = iVar3 * 8;
    if (uVar1 >= *(u32 *)(iStack_18 + 0x24)) {
        return 1;
    }
    st[0] = (u32)iStack_18;
    iVar2 = *(u32 *)(iStack_18 + 0x20) + uVar1;
    st[1] = iVar2;
    func_02087008(st, out, 8);
    param_1[0xb] = out[0];
    t = out[1];
    param_1[0xc] = t;
    param_1[0xd] = iVar3;
    return func_020870b8(param_1, 7, t);
}
