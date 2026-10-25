#include "ctx.h"
#pragma opt_common_subs off

extern u32 data_0215be48;
extern u32 data_02148254;
extern u32 data_02148258;
extern u32 data_02148294;
extern u32 data_021482a4;
extern u32 data_021482b4;
extern u32 data_021482b8;
extern u32 data_021482c4;
extern u32 data_021482d4;
extern void func_0205f050(u8 *dst, u32 n, u32 src, u32 v);
extern void func_0210ebd0(u8 *a, u32 b, u8 *c);
extern u32 *func_0208c720(s32 *a, u32 b, u8 *c);
extern s32 func_0207df48(u8 *a);
extern void func_0207df9c(u32 *a);

void func_0210bc80(u32 *param_1, s32 *param_2, u32 param_3)
{
    u8 auStack_d0[64];
    u32 auStack_90[16];
    u8 acStack_50[68];
    s32 iVar3;
    u32 *puVar2;
    u32 uVar5;
    s32 iVar4;

    *param_1 = param_3;
    iVar4 = *(s32 *)(*(u8 **)&data_0215be48 + 0x1113c);
    iVar3 = iVar4 * 8;
    if (*(u32 *)((u8 *)&data_02148254 + iVar4 * 8) != 0) {
        uVar5 = *(s16 *)((u8 *)&data_02148258 + iVar3);
        func_0205f050(auStack_d0, 64, (u32)&data_02148294, uVar5);
    } else {
        uVar5 = *(s16 *)((u8 *)&data_02148258 + iVar3);
        func_0205f050(auStack_d0, 64, (u32)&data_021482a4, uVar5);
    }
    func_0210ebd0((u8 *)auStack_90, 64, auStack_d0);
    puVar2 = func_0208c720(param_2, (u32)&data_021482b4, (u8 *)auStack_90);
    ((void (*)(u8 *, u32, u32, u32))func_0205f050)(acStack_50, 64, (u32)&data_021482b8, (u32)auStack_d0);
    param_1[1] = func_0207df48(acStack_50);
    ((void (*)(u8 *, u32, u32, u32))func_0205f050)(acStack_50, 64, (u32)&data_021482c4, (u32)auStack_d0);
    param_1[2] = func_0207df48(acStack_50);
    ((void (*)(u8 *, u32, u32, u32))func_0205f050)(acStack_50, 64, (u32)&data_021482d4, (u32)auStack_d0);
    param_1[3] = func_0207df48(acStack_50);
    func_0207df9c(puVar2);
}
