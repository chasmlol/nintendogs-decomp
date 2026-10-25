#include "ctx.h"
extern u8 data_02159444[];
extern u8 data_02159468[];
extern u8 data_ov004_0217025c[];
extern u8 *data_0214f464;
extern s32 func_020f5220(void);
extern void func_020f3bdc(s32 a);
extern void func_02037450(u8 *p, s32 a);
extern s32 func_02022dd0(u8 *p);
extern s16 func_0203bc40(u8 *p);
extern s32 func_0202dc50(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02029504(u8 *p);
extern s32 func_ov004_0216ea3c(void);
extern void func_ov004_0216e554(s32 a);
extern void func_020bbc58(void);
extern void func_ov004_0216c23c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_0203541c(u8 *p);
extern void func_02042af4(s32 a);
extern void func_02029180(u8 *p, s32 a, s32 b);
extern s32 func_0203567c(u8 *p);

typedef struct { s32 v[3]; } T3;

void func_ov004_02167c70(u8 *param_1, s32 param_2)
{
    u16 local_18[8];
    u32 uVar9;
    u16 uVar1;
    s32 iVar5;
    s32 iVar7;
    u32 *puVar2;
    s32 bVar3;
    s16 sVar4;

    iVar7 = *(s16 *)(*(u8 **)data_02159444 + 0x7a);
    if (iVar7 < 0) goto z4;
    if (*(s16 *)(*(u8 **)data_02159468 + 0x20) > iVar7) goto nz4;
z4:
    iVar7 = 0;
    goto l48;
nz4:
    iVar7 = *(s32 *)(*(u8 **)data_02159468 + iVar7 * 4 + 4);
l48:
    *(u32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    bVar3 = func_020f5220();
    if (bVar3 != 0) {
        func_020f3bdc(*(s32 *)(param_1 + 0x484));
    }
    if (iVar7 == 0) goto gate;
    *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar7 + 0xbc);
    *(T3 *)(param_1 + 0x278) = *(T3 *)(param_1 + 0x26c);
    *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x26c);
    func_02037450(param_1, param_2);
gate:
    if (*(u16 *)(param_1 + 0x112) != 0) {
        iVar5 = 0;
        goto jn;
    }
    switch (*(s16 *)(param_1 + 0xf0)) {
    case 0:
        goto ca;
    case 111:
        iVar5 = 0;
        goto jn;
    default:
        goto ca;
    }
ca:
    if (func_02022dd0(param_1) == 0) goto eb;
    sVar4 = func_0203bc40(param_1);
    iVar5 = func_0202dc50(param_1, 0, 0, sVar4, *(u8 *)(param_1 + 0xa5), 1);
    goto jn;
eb:
    func_02029504(param_1);
    iVar5 = 0;
jn:
    if (iVar5 != 0) return;
    if (iVar7 != 0) goto p2d8;
    local_18[0] = *(u16 *)data_ov004_0217025c;
    local_18[1] = ((u16 *)data_ov004_0217025c)[1];
    local_18[2] = ((u16 *)data_ov004_0217025c)[2];
    local_18[3] = ((u16 *)data_ov004_0217025c)[3];
    local_18[4] = ((u16 *)data_ov004_0217025c)[4];
    iVar5 = func_ov004_0216ea3c();
    if (iVar5 != 0) {
        func_ov004_0216e554(1);
    }
    func_020bbc58();
    uVar1 = local_18[*(s8 *)(param_1 + 0x8e)];
    uVar9 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar9;
    if ((u16)(((u32)uVar1 * (u16)uVar9) >> 16) != 0) goto r216;
    uVar9 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar9;
    switch ((u16)(((u32)(u16)uVar9 * 5u) >> 16)) {
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
        goto END;
    }
r216:
    func_ov004_0216c23c(param_1);
    return;
p2d8:
    iVar5 = func_0203541c(param_1);
    if (iVar5 == 0) {
        iVar5 = 0;
        goto l314;
    }
    func_02042af4(*(s8 *)(param_1 + 0x88));
    func_02029180(param_1, 83, 1);
    func_0203e908(param_1, 0x47b);
    iVar5 = 1;
l314:
    if (iVar5 != 0) return;
    if (func_0203567c(param_1) == 0) return;
    func_0203e908(param_1, 0x4bd);
END:
    return;
}
