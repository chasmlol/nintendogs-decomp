#include "ctx.h"

extern s32 func_02028130(u8 *p);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_02027b38(u8 *p, s32 a);
extern void func_02027ee0(u8 *p, s32 a, s32 b);
extern void func_ov005_021601e8(u8 *p, s32 *a, s32 b, s32 *c, s32 d);
extern s32 func_ov005_0215ffdc(u8 *p, s32 a, s32 b, s32 c);
extern void func_020399ec(u8 *p);
extern void func_ov005_0216047c(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s16 a);
extern u32 *data_0214f464;
extern u8 *data_02159444;

void func_ov005_0215f3a4(u8 *param_1)
{
    s32 iVar2;
    u32 uVar3;
    s32 iVar4;
    u32 uVar5;
    u8 *z;
    s64 v;

    iVar2 = func_02028130(param_1);
    func_01ff832c(iVar2 << 1, (s32 *)(param_1 + 0x1a4), (s32 *)(param_1 + 0x2dc),
                  (s32 *)(param_1 + 0x3b4));
    uVar3 = func_02028130(param_1);
    v = ((s64)(s32)uVar3 << 6) + 0x800;

    *(u32 *)(param_1 + 0x3b8) = (u32)(*(u16 *)(param_1 + 0x11e) - 10) * (u32)(v >> 12) + *(u32 *)(param_1 + 0x3b8);
    iVar4 = *(s16 *)(param_1 + 0x152);
    switch (iVar4) {
    case 45:
        goto Lec;
    case 207:
    case 208:
    case 438:
    case 439:
    case 444:
    case 445:
        goto L1e0;
    default:
        goto DEF;
    }

Lec:
    uVar3 = *data_0214f464 * 0x10dcd + 1;
    uVar5 = (u16)uVar3 * 10000u;
    *data_0214f464 = uVar3;
    if ((u16)(uVar5 >> 16) >= *(u16 *)(param_1 + 0x11e)) goto DEF;
    iVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar2;
    switch ((u16)(((u32)iVar2 << 16) >> 29)) {
    case 0:
    case 1:
        func_0203e8cc(param_1, 0, 0x1b6);
        break;
    case 2:
    case 3:
        func_0203e8cc(param_1, 0, 0x1b7);
        break;
    case 4:
        func_0203e8cc(param_1, 0, 0x1bc);
        break;
    case 5:
        func_0203e8cc(param_1, 0, 0x1bd);
        break;
    case 6:
        func_0203e8cc(param_1, 0, 0xcf);
        break;
    case 7:
        func_0203e8cc(param_1, 0, 0xd0);
        break;
    }
    goto DEF;

L1e0:
    if (func_0203567c(param_1) != 0) {
        func_0203e8cc(param_1, 0, 45);
    }

DEF:
    z = data_02159444;
    if ((*(u16 *)(z + 0x84) & 1) != 0) {
        s32 b = *(s32 *)(z + 0x94);
        s32 a = *(s32 *)(z + 0x98);
        if (a <= 0) a = -a;
        if (b <= 0) b = -b;
        if (b + a > 10) {
            func_02027ee0(param_1, 1, 30);
        } else {
            (*(u16 *)(param_1 + 0x128))++;
            if (*(u16 *)(param_1 + 0x128) >= 60) {
                *(u16 *)(param_1 + 0x128) = 0;
                func_02027b38(param_1, -20);
            }
            func_02027ee0(param_1, 1, -10);
        }
    }
    func_ov005_021601e8(param_1, (s32 *)(param_1 + 900), 0x802, (s32 *)(param_1 + 840), 0x802);
    iVar2 = func_ov005_0215ffdc(param_1, 60, 12, 0);
    if (iVar2 == 0) {
        func_020399ec(param_1);
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)(param_1 + 0x11c) > 20) {
        func_0203e908(param_1, (s16)0x451);
        return;
    }
    func_ov005_0216047c(param_1, 1);
    return;
}
