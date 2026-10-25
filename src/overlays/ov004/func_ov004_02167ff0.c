#include "ctx.h"
extern u8 *data_02159444;
extern u8 *data_02159468;
extern u16 data_ov004_0217025c[];
extern u32 *data_0214f464;
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
extern s32 func_0200ce4c(u8 *p);

typedef struct { s32 v[3]; } T3;

void func_ov004_02167ff0(u8 *param_1)
{
    u16 local_18[5];
    u32 uVar9;
    u16 uVar1;
    s32 iVar5;
    s32 iVar7;
    s32 bVar3;
    s16 sVar4;

    iVar7 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar7 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar7) {
        iVar7 = 0;
    } else {
        iVar7 = *(s32 *)(data_02159468 + iVar7 * 4 + 4);
    }
    *(u32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    bVar3 = func_020f5220();
    if (bVar3 != 0) {
        func_020f3bdc(*(s32 *)(param_1 + 0x484));
    }
    if (iVar7 != 0) {
        *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar7 + 0xbc);
        *(T3 *)(param_1 + 0x278) = *(T3 *)(param_1 + 0x26c);
        func_02037450(param_1, 0x300);
    }
    if (*(u16 *)(param_1 + 0x112) != 0) {
        iVar5 = 0;
        goto gate_done;
    }
    if (*(s16 *)(param_1 + 0xf0) == 0) {
        goto gate_call;
    }
    switch (*(s16 *)(param_1 + 0xf0)) {
    case 0x6f:
        iVar5 = 0;
        break;
    default:
gate_call:
        if (func_02022dd0(param_1) != 0) {
            sVar4 = func_0203bc40(param_1);
            iVar5 = func_0202dc50(param_1, 0, 0, sVar4, *(u8 *)(param_1 + 0xa5), 1);
        } else {
            func_02029504(param_1);
            iVar5 = 0;
        }
        break;
    }
gate_done:
    if (iVar5 != 0) {
        return;
    }
    if (iVar7 == 0) {
        local_18[0] = data_ov004_0217025c[0];
        local_18[1] = data_ov004_0217025c[1];
        local_18[2] = data_ov004_0217025c[2];
        local_18[3] = data_ov004_0217025c[3];
        local_18[4] = data_ov004_0217025c[4];
        iVar7 = func_ov004_0216ea3c();
        if (iVar7 != 0) {
            func_ov004_0216e554(1);
        }
        func_020bbc58();
        uVar1 = local_18[*(s8 *)(param_1 + 0x8e)];
        uVar9 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar9;
        if ((u16)(((u32)uVar1 * (u16)uVar9) >> 16) == 0) {
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
    }
    bVar3 = func_0200ce4c(param_1);
    if (bVar3 != 0) {
        return;
    }
    func_0203e908(param_1, 0x4bd);
fin:
    ;
}
