#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;


extern u32 data_0214f45c;
extern u32 data_0214f460;
extern u32 data_02159444;
extern u32 data_0214f464;

extern u8 *func_020364a8(u8 *p);
extern u8 *func_0200c498(u8 *p, s32 a);
extern s32 func_020aaf38(u8 *p, u8 *q, s32 n);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_ov006_021600a8(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_020266f8(u8 *p);
extern s32 func_02027e4c(u8 *p, s32 a);
extern s32 func_020328f0(u8 *p);
extern void func_02067e34(u8 *a, s32 *b, s32 *c);
extern s32 func_02009f38(s32 *a, s32 *b);
extern void func_02025e34(u8 *p);
extern s32 func_02009bd0(u8 *a, s32 *b);
extern s32 func_02028124(u8 *p);
extern void func_ov006_021607d0(u8 *p, s32 a, s32 b, s32 c);
extern void func_ov006_02161344(u8 *p);
extern void func_0202508c(u8 *p, s32 a, s32 b, u32 c);
extern s32 func_0203567c(u8 *p);
extern void func_02026bac(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern void func_0202675c(u8 *p);
extern s32 func_02035584(u8 *p, s32 a);


void func_ov006_0215fb74(u8 *param_1, s32 param_2, s16 param_3, s16 param_4, s32 param_5, s32 param_6)
{
    s16 sVar1;
    s32 bVar2;
    s32 iVar3;
    u32 uVar7;
    s32 iVar4;
    s32 iVar5;
    s32 uVar6;
    u32 uLcg;
    u32 uVar8;
    s32 aiStack_30[4];
    u8 uVar9;
    s16 *unaff_r5;
    u8 *unaff_r4;
    s32 off;
    s16 k3;
    s8 k1;

    iVar3 = (s32)func_020364a8(param_1);
    if (iVar3 == 0) {
        goto Lfalse;
    }
    iVar4 = (s32)func_0200c498(*(u8 **)(iVar3 + 0x30), (s16)*(s32 *)(iVar3 + 0x2c));
    if (iVar4 == 0) {
        goto Lfalse;
    }
    off = (s16)*(s32 *)(iVar4 + 0x20) * 0x24;
    unaff_r5 = (s16 *)(*(u8 **)(*(u8 **)&data_0214f45c + 0x18) + off);
    if (unaff_r5 != NULL) {
        bVar2 = 1;
        goto Lchk;
    }
Lfalse:
    bVar2 = 0;
Lchk:
    if (bVar2) {
        sVar1 = unaff_r5[1];
        if (0 > param_4) {
            param_4 = 0;
        }
        if (param_4 >= sVar1) {
            param_4 = (s16)(sVar1 - 1);
        }
        if (*(s32 *)(iVar3 + 0x34) == 0) {
            unaff_r4 = (u8 *)(*(s32 *)(*(u8 **)&data_0214f45c + 0x1c) + (s16)(unaff_r5[0] + param_4) * 0x44);
        } else if (*(s32 *)(iVar3 + 0x34) == 1) {
            unaff_r4 = (u8 *)(*(s32 *)(*(u8 **)&data_0214f45c + 0x1c) + (s16)((unaff_r5[0] + sVar1 - 1) - param_4) * 0x44);
        }
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
    if (bVar2) {
        iVar4 = func_020aaf38(*(u8 **)&data_0214f460, unaff_r4, 0x19000);
        switch (*(s32 *)(param_1 + 0x46c)) {
        case 0:
            *(T3 *)(param_1 + 0x26c) = *(T3 *)unaff_r4;
            func_0203942c(param_1);
            func_02037450(param_1, 0x100);
            if (*(s8 *)(param_1 + 0xa1) == 0) {
                func_ov006_021600a8(param_1);
            }
            if (iVar4 != 0) {
                if ((*(u16 *)(*(u8 **)&data_02159444 + 0x84) & 2) == 0) {
                    goto Lplus10;
                }
                *(s32 *)(param_1 + 0x468) = *(s32 *)(0x468 + param_1) + 200;
                if (param_5 != 0) {
                    func_0203e8cc(param_1, 0, 0x11);
                    func_020266f8(param_1);
                }
                k3 = 3;
                uLcg = *(u32 *)*(u8 **)&data_0214f464 * 0x10dcd + 1;
                *(u32 *)*(u8 **)&data_0214f464 = uLcg;
                if ((u16)((((u32)(u16)uLcg * k3) >> 16)) == 0) {
                    *(u8 *)(param_1 + 0x93) = (u8)(k3);
                    *(u8 *)(param_1 + 0x97) = (u8)(0);
                }
                goto Lafter;
Lplus10:
                *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 10;
            }
Lafter:
            iVar3 = func_02027e4c(param_1, param_2);
            if (*(s32 *)(param_1 + 0x468) + iVar3 > 1000) {
                func_0203e8cc(param_1, 0, 0x11);
                k1 = 1;
                func_0203e8cc(param_1, 1, k1);
                func_020266f8(param_1);
                *(u8 *)(param_1 + 0x93) = (u8)(2);
                *(s32 *)(param_1 + 0x46c) = 3;
                return;
            }
            bVar2 = func_020328f0(param_1);
            if (bVar2) {
                func_02067e34(unaff_r4, (s32 *)(param_1 + 0x2a0), aiStack_30);
                bVar2 = func_02009f38(aiStack_30, (s32 *)(param_1 + 0x1a4));
                if (bVar2 == 0) {
                    return;
                }
                func_0203e8cc(param_1, 0, 0x167);
                func_02025e34(param_1);
                *(u8 *)(param_1 + 0x93) = (u8)(0);
                *(u8 *)(param_1 + 0x97) = (u8)(0);
                *(s32 *)(param_1 + 0x46c) = 2;
                return;
            }
            if (iVar4 != 0) {
                return;
            }
            if (param_6 == 0) {
                return;
            }
            if ((*(u16 *)(*(u8 **)&data_02159444 + 0x84) & 1) == 0) {
                return;
            }
            func_0203e8cc(param_1, 0, 0x12);
            func_0202675c(param_1);
            *(s32 *)(param_1 + 0x46c) = 1;
            return;
        case 1:
            iVar5 = (s32)*(u8 **)&data_0214f464;
            *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar5 + 0x74);
            func_0203942c(param_1);
            func_02037450(param_1, 0x310);
            if (iVar4 != 0) {
                func_0203e8cc(param_1, 0, 0x11);
                func_020266f8(param_1);
                *(s32 *)(param_1 + 0x46c) = 0;
                return;
            }
            iVar4 = func_02009bd0(unaff_r4, (s32 *)(param_1 + 0x2a0));
            iVar5 = func_02028124(param_1);
            if (iVar4 <= iVar5 * 0xa9) {
                return;
            }
            func_ov006_021607d0(param_1, iVar3, 0, 1);
            func_ov006_02161344(param_1);
            return;
        case 2:
            *(T3 *)(param_1 + 0x26c) = *(T3 *)unaff_r4;
            func_0203942c(param_1);
            func_02037450(param_1, 0x100);
            uVar6 = func_02028124(param_1);
            func_0202508c(param_1, 9, 0x11, (u32)((((s64)(-630) * (s64)uVar6) + 0x800) >> 12));
            iVar3 = func_0203567c(param_1);
            if (iVar3 == 0) {
                return;
            }
            func_0203e8cc(param_1, 0, 0);
            func_02026bac(param_1);
            *(s32 *)(param_1 + 0x46c) = 0;
            return;
        case 3:
            bVar2 = func_020328f0(param_1);
            if (!bVar2) {
                iVar3 = func_02035584(param_1, 1);
                if (iVar3 == 0) {
                    return;
                }
            }
            func_0203e908(param_1, param_3);
            return;
        }
    } else {
        func_ov006_02161344(param_1);
    }
}
