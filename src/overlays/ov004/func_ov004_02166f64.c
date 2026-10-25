#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern s16 data_02126750[];
extern u32 data_02139e50[];
extern s32 *data_0215be34;
extern u16 data_ov004_0217025c[];
extern u32 *data_0214f464;

extern s32 func_020f5220(void);
extern void func_020f3bdc(u32);
extern s32 func_0203579c(s32, s32);
extern void func_02081198(s32, s32, void *);
extern void func_0209bdcc(s32 *, s32, s32);
extern s32 func_02022dd0(s32);
extern s16 func_0203bc40(s32);
extern s32 func_0202dc50(s32, s32, s32, s32, u8, s32);
extern void func_02029504(s32);
extern void func_0203e908(s32, s16);
extern s32 func_ov004_0216ea3c(void);
extern void func_ov004_0216e554(s32);
extern void func_020bbc58(void);
extern void func_ov004_0216c23c(s32);

void func_ov004_02166f64(s32 param_1)
{
    s16 sVar4;
    s32 iVar5;
    s32 *piVar6;
    s32 iVar7;
    s32 iVar8;
    u32 uVar9;
    u16 local_18[5];
    s32 idx;
    u16 lo;

    iVar8 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar8 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar8) {
        iVar8 = 0;
    } else {
        iVar8 = *(s32 *)(data_02159468 + iVar8 * 4 + 4);
    }
    *(s32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (func_020f5220()) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    if (iVar8 != 0) {
        *(s32 *)(param_1 + 0x260) = 0;
        *(s32 *)(param_1 + 0x268) = 0;
        iVar5 = func_0203579c(param_1, data_02126750[*(s32 *)(param_1 + 0x468)]);
        if (iVar5 != 0) {
            *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 1;
            if (data_02126750[*(s32 *)(param_1 + 0x468)] == -1) {
                *(s32 *)((u8 *)param_1 + 0x468) = 0;
            }
            piVar6 = data_0215be34;
            iVar7 = (piVar6 != (s32 *)0) ? *piVar6 : 0;
            func_02081198(iVar7, 0x65, (void *)data_02139e50[*(s8 *)(param_1 + 0x88)]);
            func_0209bdcc((s32 *)(param_1 + 0x95c), -2, 0);
        }
    }
    if (*(u16 *)(param_1 + 0x112) != 0) {
        iVar7 = 0;
        goto gate_done;
    }
    if (*(s16 *)(param_1 + 0xf0) == 0) {
        goto gate_call;
    }
    switch (*(s16 *)(param_1 + 0xf0)) {
    case 0x6f:
        iVar7 = 0;
        break;
    default:
    gate_call:
        if (func_02022dd0(param_1)) {
            sVar4 = func_0203bc40(param_1);
            iVar7 = func_0202dc50(param_1, 0, 0, (s32)sVar4, *(u8 *)(param_1 + 0xa5), 1);
        } else {
            func_02029504(param_1);
            iVar7 = 0;
        }
        break;
    }
gate_done:
    if (iVar7 != 0) {
        return;
    }
    if (iVar8 == 0) {
        local_18[0] = data_ov004_0217025c[0];
        local_18[1] = data_ov004_0217025c[1];
        local_18[2] = data_ov004_0217025c[2];
        local_18[3] = data_ov004_0217025c[3];
        local_18[4] = data_ov004_0217025c[4];
        iVar8 = func_ov004_0216ea3c();
        if (iVar8 != 0) {
            func_ov004_0216e554(1);
        }
        func_020bbc58();
        idx = *(s8 *)(param_1 + 0x8e);
        lo = local_18[idx];
        uVar9 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar9;
        if ((u16)(((u32)lo * (u16)uVar9) >> 16) == 0) {
            uVar9 = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = uVar9;
            switch ((u16)((((u32)(u16)uVar9) * 5) >> 16)) {
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
        }
        func_ov004_0216c23c(param_1);
        return;
    } else {
        if (*(u16 *)(param_1 + 0xfc) <= 150) {
            return;
        }
        func_0203e908(param_1, 0x4c5);
    }
fin:
    ;
}
