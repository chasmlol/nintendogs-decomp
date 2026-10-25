#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u16 data_ov004_0217025c[];
extern u32 *data_0214f464;
extern s32 func_020f5220(void);
extern void func_020f3bdc(s32 a);
extern void func_0203942c(u8 *a);
extern s32 func_02037450(u8 *a, s32 b);
extern void func_020381f0(u8 *a);
extern void func_ov004_02169ff4(u8 *a);
extern s32 func_02022dd0(u8 *a);
extern s32 func_0203bc40(u8 *a);
extern s32 func_0202dc50(u8 *a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern void func_02029504(u8 *a);
extern s32 func_02028124(u8 *a);
extern s32 func_ov004_0216ea3c(void);
extern void func_ov004_0216e554(s32 a);
extern void func_020bbc58(void);
extern void func_0203e908(u8 *a, s32 b);
extern void func_ov004_0216c23c(u8 *a);
extern s32 func_020c1f34(u8 *a);

s32 func_ov004_021692e4(u8 *param_1, s32 param_2)
{
    T3 tmp;
    u16 loc[5];
    s32 iVar5;
    s32 iVar6;
    s32 bV;
    s32 t;
    u32 uVar8;
    u16 uVar1;

    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x26c) = *(s32 *)(param_1 + 0x26c) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    bV = func_020f5220();
    if (bV != 0) {
        func_020f3bdc(*(s32 *)(param_1 + 0x484));
    }
    func_0203942c(param_1);
    *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x26c);
    iVar5 = func_02037450(param_1, 0x300);
    func_020381f0(param_1);
    func_ov004_02169ff4(param_1);
    if (*(u16 *)(param_1 + 0x112) != 0) {
        iVar6 = 0;
        goto L124;
    }
    switch (*(s16 *)(param_1 + 0xf0)) {
    case 0:
        goto LA;
    case 111:
        break;
    default:
        goto LA;
    }
    iVar6 = 0;
    goto L124;
LA:
    if (func_02022dd0(param_1) != 0) {
        iVar6 = func_0202dc50(param_1, 0, 0, func_0203bc40(param_1), *(u8 *)(param_1 + 0xa5), 1);
    } else {
        func_02029504(param_1);
        iVar6 = 0;
    }
L124:
    if (iVar6 != 0) {
        return 1;
    }
    if (param_2 == 0) {
        goto L224;
    }
    t = *(s16 *)(data_02159444 + 0x7a);
    if (t < 0 || *(s16 *)(data_02159468 + 0x20) <= t) {
        iVar6 = 0;
    } else {
        iVar6 = *(s32 *)(data_02159468 + t * 4 + 4);
    }
    if (iVar6 == 0) {
        goto L20c;
    }
    if (*(s16 *)(iVar6 + 0x90) == 0 || *(s16 *)(iVar6 + 0x90) == 2) {
        bV = 1;
    } else if (*(s16 *)(iVar6 + 0x94) == 0x35 && func_020c1f34((u8 *)iVar6) == 0) {
        bV = 1;
    } else {
        bV = 0;
    }
    if (bV != 0) {
        goto L20c;
    }
    if (*(s16 *)(iVar6 + 0x96) != 20) {
        goto L20c;
    }
    tmp = *(T3 *)(iVar6 + 0xbc);
    if ((s32)tmp.w[0] <= 0) {
        goto L20c;
    }
    if ((s32)tmp.w[0] >= 4096) {
        goto L20c;
    }
    func_0203e908(param_1, 0x4bd);
    bV = 1;
    goto LJ;
L20c:
    bV = 0;
LJ:
    if (bV != 0) {
        return 1;
    }
L224:
    t = func_02028124(param_1);
    if (iVar5 >= t * 4) {
        t = func_02028124(param_1);
        if (*(s32 *)(param_1 + 0x26c) >= -(t * 4)) {
            goto R0;
        }
    }
    loc[0] = data_ov004_0217025c[0];
    loc[1] = data_ov004_0217025c[1];
    loc[2] = data_ov004_0217025c[2];
    loc[3] = data_ov004_0217025c[3];
    loc[4] = data_ov004_0217025c[4];
    if (func_ov004_0216ea3c() != 0) {
        func_ov004_0216e554(1);
    }
    func_020bbc58();
    uVar1 = loc[*(s8 *)(param_1 + 0x8e)];
    uVar8 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar8;
    if ((u16)(((u32)uVar1 * (u16)uVar8) >> 16) == 0) {
        uVar8 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar8;
        switch ((u16)(((u16)uVar8 * 5u) >> 16)) {
        case 0:
            func_0203e908(param_1, 0x4ac);
            break;
        case 1:
            func_0203e908(param_1, 0x4ad);
            break;
        case 2:
            func_0203e908(param_1, 0x4ae);
            break;
        case 3:
            func_0203e908(param_1, 0x4af);
            break;
        case 4:
            func_0203e908(param_1, 1200);
            break;
        }
    } else {
        func_ov004_0216c23c(param_1);
    }
    return 1;
R0:
    return 0;
}
