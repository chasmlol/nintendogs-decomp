#include "ctx.h"

extern u32 data_ov005_02167f00;
extern u32 data_ov005_02167de0;
extern u32 data_0215be34;
extern u8 func_ov005_02163180[], func_ov005_02162fdc[], func_ov005_02162e2c[], func_ov005_02162d84[];
extern u8 func_ov005_02162c78[], func_ov005_02162b48[], func_ov005_02162a60[], func_ov005_02162930[];
extern u8 func_ov005_02162804[], func_ov005_021626cc[], func_ov005_021625a0[], func_ov005_0216245c[];
extern u8 func_ov005_02162318[], func_ov005_021621b0[], func_ov005_02162064[], func_ov005_02161f1c[];
extern u8 func_ov005_02161df8[];
extern s32 func_01ffdb08(s32 a);
extern u32 func_020d8fa0(s32 a);
extern s32 func_02028130(s32 a);
extern s32 *func_0208122c(s32 a, s32 b, s32 *c);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov005_021618b0(s32 param_1)
{
    s32 local_18[3] = {0, 0, 0};
    s32 iVar4;
    s32 v;
    s32 r;

    iVar4 = func_01ffdb08(param_1);
    *(s16 *)data_ov005_02167f00 = (s16)param_1;
    *(u32 *)(data_ov005_02167f00 + 4) = func_020d8fa0(iVar4);
    v = (s32)data_ov005_02167de0;
    r = func_02028130(iVar4);
    *(s16 *)(data_ov005_02167f00 + 8) = (s16)FX_Mul(r, v);
    *(s32 **)(data_ov005_02167f00 + 0x0c) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x2a, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x0c) + 0x6c) = (u32)func_ov005_02163180;
    *(s32 **)(data_ov005_02167f00 + 0x10) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x2b, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x10) + 0x6c) = (u32)func_ov005_02162fdc;
    *(s32 **)(data_ov005_02167f00 + 0x14) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x2b, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x14) + 0x6c) = (u32)func_ov005_02162e2c;
    *(s32 **)(data_ov005_02167f00 + 0x18) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x15, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x18) + 0x6c) = (u32)func_ov005_02162d84;
    *(s32 **)(data_ov005_02167f00 + 0x1c) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x2c, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x1c) + 0x6c) = (u32)func_ov005_02162c78;
    *(s32 **)(data_ov005_02167f00 + 0x20) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x2d, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x20) + 0x6c) = (u32)func_ov005_02162b48;
    *(s32 **)(data_ov005_02167f00 + 0x24) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x16, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x24) + 0x6c) = (u32)func_ov005_02162a60;
    *(s32 **)(data_ov005_02167f00 + 0x28) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x17, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x28) + 0x6c) = (u32)func_ov005_02162930;
    *(s32 **)(data_ov005_02167f00 + 0x2c) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x18, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x2c) + 0x6c) = (u32)func_ov005_02162804;
    *(s32 **)(data_ov005_02167f00 + 0x30) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x19, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x30) + 0x6c) = (u32)func_ov005_021626cc;
    *(s32 **)(data_ov005_02167f00 + 0x34) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x1a, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x34) + 0x6c) = (u32)func_ov005_021625a0;
    *(s32 **)(data_ov005_02167f00 + 0x38) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x24, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x38) + 0x6c) = (u32)func_ov005_0216245c;
    *(s32 **)(data_ov005_02167f00 + 0x3c) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x25, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x3c) + 0x6c) = (u32)func_ov005_02162318;
    *(s32 **)(data_ov005_02167f00 + 0x40) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x26, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x40) + 0x6c) = (u32)func_ov005_021621b0;
    *(s32 **)(data_ov005_02167f00 + 0x44) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x27, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x44) + 0x6c) = (u32)func_ov005_02162064;
    *(s32 **)(data_ov005_02167f00 + 0x48) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x37, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x48) + 0x6c) = (u32)func_ov005_02161f1c;
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x48) + 0x1c) = *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x48) + 0x1c) | 2;
    *(s32 **)(data_ov005_02167f00 + 0x4c) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x38, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x4c) + 0x6c) = (u32)func_ov005_02161df8;
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x4c) + 0x1c) = *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x4c) + 0x1c) | 2;
    *(s32 **)(data_ov005_02167f00 + 0x50) = func_0208122c(data_0215be34 != 0 ? *(s32 *)data_0215be34 : 0, 0x39, local_18);
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x50) + 0x6c) = (u32)(void *)func_ov005_02161df8;
    *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x50) + 0x1c) = *(u32 *)(*(u8 **)(data_ov005_02167f00 + 0x50) + 0x1c) | 2;
}
