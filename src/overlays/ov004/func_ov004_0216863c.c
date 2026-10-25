#include "ctx.h"

extern u32 data_02159444;
extern u32 data_02159468;
extern u32 data_02159428;
extern u16 data_ov004_0217025c[];
extern u32 *data_0214f464;

extern s32 func_020f5220(void);
extern void func_020f3bdc(u32 a);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern s32 func_02036a88(u8 *p, s32 a, s32 *b, s32 *c, s16 *d);
extern s32 func_02028130(u8 *p);
extern void func_020399ac(u8 *p);
extern s32 func_02028124(u8 *p);
extern s32 func_02022dd0(u8 *p);
extern s16 func_0203bc40(u8 *p);
extern s32 func_0202dc50(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02029504(u8 *p);
extern s32 func_ov004_0216ea3c(void);
extern void func_ov004_0216e554(s32 a);
extern void func_020bbc58(void);
extern void func_ov004_0216c23c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_0200cf20(u8 *p);
extern void func_ov004_02168c0c(u8 *p, s32 a, s32 b, s32 c);

typedef struct { u32 w[3]; } T12;

#define G444 (*(u8 **)&data_02159444)
#define G468 (*(u8 **)&data_02159468)
#define G428 (*(u8 **)&data_02159428)
#define G464 data_0214f464

void func_ov004_0216863c(u8 *param_1)
{
    s32 iVar15;
    s32 iVar13;
    s32 bVar5;
    s32 iVar9;
    s32 iVar7;
    s32 bVar4;
    s16 sVar6;
    struct { s16 sStack_38; u16 local_36[4]; u16 local_2e; u16 local_2c[4]; u16 local_24; u8 pad[6]; } fr;
    s64 lVar2;
    u32 uVar11;
    u32 uVar12;
    s32 iVar16;
    s32 idx;
    u32 uVar1;

    idx = *(s16 *)(G444 + 0x7a);
    if (idx < 0 || *(s16 *)(G468 + 0x20) <= idx) {
        iVar9 = 0;
    } else {
        iVar9 = *(s32 *)(G468 + idx * 4 + 4);
    }
    iVar15 = 0;
    *(s32 *)(param_1 + 0x484) = 0;
    iVar13 = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    bVar5 = 1;
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    bVar4 = func_020f5220();
    if (bVar4) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    if (iVar9 != 0) {
        iVar15 = *(s32 *)(iVar9 + 0xf8);
        *(T12 *)(param_1 + 0x26c) = *(T12 *)(iVar9 + 0xbc);
        *(T12 *)(param_1 + 0x3b4) = *(T12 *)(param_1 + 0x26c);
        func_0203942c(param_1);
        func_02037450(param_1, 0x300);
        iVar13 = func_02036a88(param_1, iVar9, (s32 *)(param_1 + 0x26c), (s32 *)(param_1 + 0x26c), &fr.sStack_38);
        if (*(s16 *)(iVar9 + 0x96) == 0x13) goto c13;
        if (*(s16 *)(iVar9 + 0x96) != 0x14) goto after13;
        iVar16 = *(s32 *)(param_1 + 0x26c);
        bVar5 = 1;
        iVar7 = func_02028124(param_1);
        if (iVar16 - *(s32 *)(param_1 + 0x2a0) >= iVar7 * -4) {
            if (iVar16 >= -0x5000) bVar5 = 0;
        }
        goto after13;
c13:
        bVar5 = 1;
        uVar12 = func_02028130(param_1);
        uVar11 = (u32)((((s64)(s32)uVar12) * 0x14cc + 0x800) >> 12);
        if (!(*(s32 *)(param_1 + 0x26c) < -(s32)(*(u32 *)(G428 + 0xc) - uVar11))) {
            if (*(s32 *)(param_1 + 0x26c) <= 0x8000) {
                bVar5 = 0;
            }
        }
after13:
        ;
    }
    func_020399ac(param_1);
    if (*(u16 *)(param_1 + 0x112) != 0) {
        iVar7 = 0;
        goto chk;
    }
    if (*(s16 *)(param_1 + 0xf0) == 0) goto c1e8;
    switch (*(s16 *)(param_1 + 0xf0)) {
    case 0x6f:
        iVar7 = 0;
        goto chk;
    default:
        break;
    }
c1e8:
    bVar4 = func_02022dd0(param_1);
    if (bVar4 == 0) goto c228;
    sVar6 = func_0203bc40(param_1);
    iVar7 = func_0202dc50(param_1, 0, 0, sVar6, *(u8 *)(param_1 + 0xa5), 1);
    goto chk;
c228:
    func_02029504(param_1);
    iVar7 = 0;
chk:
    if (iVar7 != 0) {
        return;
    }
    if (iVar9 != 0) goto nz;
    fr.local_36[0] = data_ov004_0217025c[0];
    fr.local_36[1] = data_ov004_0217025c[1];
    fr.local_36[2] = data_ov004_0217025c[2];
    fr.local_36[3] = data_ov004_0217025c[3];
    fr.local_2e = data_ov004_0217025c[4];
    iVar9 = func_ov004_0216ea3c();
    if (iVar9 != 0) {
        func_ov004_0216e554(1);
    }
    func_020bbc58();
    uVar1 = fr.local_36[*(s8 *)(param_1 + 0x8e)];
    uVar12 = *G464 * 0x10dcd + 1;
    *G464 = uVar12;
    if ((u16)(((u32)uVar1 * (u16)uVar12) >> 16) != 0) goto cc23c_1;
    uVar12 = *G464 * 0x10dcd + 1;
    *G464 = uVar12;
    switch ((u16)(((u32)(u16)uVar12 * 5) >> 16)) {
    case 0:
        func_0203e908(param_1, 0x4ac);
        return;
    case 1:
        func_0203e908(param_1, 0x4ad);
        return;
    case 2:
        func_0203e908(param_1, 0x4ae);
        return;
    case 3:
        func_0203e908(param_1, 0x4af);
        return;
    case 4:
        func_0203e908(param_1, 0x4b0);
        return;
    default:
        goto fin;
    }
    return;
cc23c_1:
    func_ov004_0216c23c(param_1);
    return;
nz:
    if (bVar5 == 0) goto elseblk;
    fr.local_2c[0] = data_ov004_0217025c[0];
    fr.local_2c[1] = data_ov004_0217025c[1];
    fr.local_2c[2] = data_ov004_0217025c[2];
    fr.local_2c[3] = data_ov004_0217025c[3];
    fr.local_24 = data_ov004_0217025c[4];
    iVar9 = func_ov004_0216ea3c();
    if (iVar9 != 0) {
        func_ov004_0216e554(1);
    }
    func_020bbc58();
    uVar1 = fr.local_2c[*(s8 *)(param_1 + 0x8e)];
    uVar12 = *G464 * 0x10dcd + 1;
    *G464 = uVar12;
    if ((u16)(((u32)uVar1 * (u16)uVar12) >> 16) != 0) goto cc23c_2;
    uVar12 = *G464 * 0x10dcd + 1;
    *G464 = uVar12;
    switch ((u16)(((u32)(u16)uVar12 * 5) >> 16)) {
    case 0:
        func_0203e908(param_1, 0x4ac);
        return;
    case 1:
        func_0203e908(param_1, 0x4ad);
        return;
    case 2:
        func_0203e908(param_1, 0x4ae);
        return;
    case 3:
        func_0203e908(param_1, 0x4af);
        return;
    case 4:
        func_0203e908(param_1, 0x4b0);
        return;
    default:
        goto fin;
    }
    return;
cc23c_2:
    func_ov004_0216c23c(param_1);
    return;
elseblk:
    bVar5 = func_0200cf20(param_1);
    if (bVar5) {
        func_0203e908(param_1, 0x4bf);
        return;
    }
    iVar7 = func_02028124(param_1);
    lVar2 = (s64)(iVar15 + 0x1e000) * (s64)iVar7 + 0x800;
    if (iVar13 >= (s32)(u32)(lVar2 >> 12)) goto fin;
    func_ov004_02168c0c(param_1, iVar9, iVar13, iVar15);
fin:
    return;
}
