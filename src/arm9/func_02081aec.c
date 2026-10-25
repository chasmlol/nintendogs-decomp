#include "ctx.h"

typedef struct { u32 nib:4; u32 rest:28; } Nib;

extern s32 func_020678b4(s32 *a, s32 *b);
extern void func_02067af0(s32 *a, s32 *b);

void func_02081aec(u8 *param_1, s32 *param_2, s32 *param_3)
{
    s32 loc[3];
    s32 iVar1;
    Nib *nb;

    nb = (Nib *)*(u32 *)*(u32 *)(param_1 + 0x18);
    if (nb->nib - 6 > 1) {
        return;
    }
    *(s32 *)(param_1 + 0x20) = (param_3[0] + param_2[0]) / 2;
    *(s32 *)(param_1 + 0x24) = (param_3[1] + param_2[1]) / 2;
    *(s32 *)(param_1 + 0x28) = (param_3[2] + param_2[2]) / 2;
    iVar1 = func_020678b4(param_2, param_3);
    *(s32 *)(param_1 + 0x48) = iVar1 / 2;
    loc[0] = param_3[0] - param_2[0];
    loc[1] = param_3[1] - param_2[1];
    loc[2] = param_3[2] - param_2[2];
    func_02067af0(loc, loc);
    *(u16 *)(param_1 + 60) = (u16)loc[0];
    *(u16 *)(param_1 + 62) = (u16)loc[1];
    *(u16 *)(param_1 + 64) = (u16)loc[2];
}
