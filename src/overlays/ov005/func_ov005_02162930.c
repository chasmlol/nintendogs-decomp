#include "ctx.h"

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(b) + 0x800) >> 12))
#define PV(p) (**(s32 **)((u8 *)(p) + 0x18))

extern u8 *data_ov005_02167f00;
extern s32 func_01ffdb08(s32);
extern void func_020271b8(s32, s32 *, s32);
extern u32 func_02028130(s32);

#pragma opt_propagation off
void func_ov005_02162930(u8 *p)
{
    s32 iVar3;
    s32 a9;
    s32 a10;
    s32 a11;
    u8 *pp;
    s32 arr[12];
    u32 uVar4;
    u32 uVar5;
    s32 t3;
    s32 pv3;
    s32 sm;
    u8 **gp;

    gp = &data_ov005_02167f00;
    pp = p;
    iVar3 = func_01ffdb08((s32)*(s16 *)*gp);
    if (*(s32 *)(data_ov005_02167f00 + 4) != 0) {
        func_020271b8(iVar3, arr, 3);
    } else {
        func_020271b8(iVar3, arr, 7);
    }
    a10 = arr[10];
    a9 = arr[9];
    a11 = arr[11];
    uVar4 = func_02028130(iVar3);
    t3 = FXM(uVar4, 0x4cd);
    *(s32 *)(pp + 0x20) = a9 + *(s32 *)(PV(pp) + 4);
    *(s32 *)(pp + 0x24) = a10 + *(s32 *)(PV(pp) + 8);
    sm = a11 + t3;
    pv3 = *(s32 *)(PV(pp) + 0xc);
    *(s32 *)(pp + 0x28) = sm + pv3;
    uVar5 = func_02028130(iVar3);
    *(s32 *)(pp + 0x44) = FXM(uVar5, 0x5ec);
    *(s32 *)(pp + 0x54) = *(s16 *)(data_ov005_02167f00 + 8);
}
