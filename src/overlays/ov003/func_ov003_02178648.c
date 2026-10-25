#pragma avoid_byte strb
#include "ctx.h"

extern s32 data_0214f460;
extern u8 data_02152cd8[];
extern u8 *data_02159444;
extern s32 *data_0214f464;
extern u8 *data_0214f460_unused;
extern void func_02039448(u8 *p);
extern s32 func_020ab064(s32 a, u8 *b);
extern void func_01ff832c(s32 a, s32 *b, u8 *c, s32 *d);
extern void func_020ab02c(s32 a, u8 *b, s32 *c);
extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(s32 a, u8 *b, s32 c);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_02026478(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern s32 func_020bc14c(void);
extern s32 func_02044c8c(void);
extern s32 func_0203579c(u8 *p, s32 a);
extern s32 func_02039cc4(u8 *p);
extern void func_020bbe14(s32 a, s32 b);
extern void func_02039c68(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);
extern s32 func_02035164(u8 *p);
extern void func_02026494(u8 *p);
extern void func_ov003_02179bb8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);

typedef struct { u32 w[3]; } T12;


#define mulr(k, x) ((s32)(u32)((((s64)(k) * (s64)(x)) + 0x800) >> 12))

void func_ov003_02178648(u8 *param_1)
{
    s32 iVar3;
    s32 iVar5;
    s32 iVar6;
    s32 uVar4;
    s32 uVar7;
    s32 local_28[3];

    iVar6 = 1;
    func_02039448(param_1);
    iVar3 = func_020ab064((s32)data_0214f460, param_1 + 0x278);
    if (iVar3 == 0) goto CP;
        local_28[0] = *(s32 *)(data_02152cd8 + 0x54);
        local_28[1] = *(s32 *)(data_02152cd8 + 0x60);
        local_28[2] = *(s32 *)(data_02152cd8 + 0x6c);
        uVar4 = func_02028130(param_1);
        func_01ff832c(mulr(0x19a, uVar4), local_28, param_1 + 0x2e8, local_28);
        func_020ab02c((s32)data_0214f460, param_1 + 0x3b4, local_28);
        uVar4 = func_02028130(param_1);
        *(s32 *)(param_1 + 0x3b8) = *(s32 *)(param_1 + 0x3b8) + mulr(0x802, uVar4);
        if ((*(u16 *)(data_02159444 + 0x84) & 2) != 0) {
            *(s32 *)(param_1 + 0x450) = 0;
            *(s32 *)(param_1 + 0x454) = 0;
        }
    goto AFTER;
CP:
    *(T12 *)(param_1 + 0x3b4) = *(T12 *)(param_1 + 0x278);
AFTER:
    func_02037450(param_1, 0x300);
    if (*(s16 *)(param_1 + 0x152) == 0x0111) {
        if (*(u16 *)(param_1 + 0xfc) > 0x78 && (((s32)(*(vu16 *)0x04000304 & 0x8000)) >> 15) == 0) {
            iVar3 = func_02028130(param_1);
            iVar5 = func_02028130(param_1);
            uVar7 = mulr(0x802, mulr(iVar5, iVar3));
            iVar3 = func_020aaf38((s32)data_0214f460, param_1 + 0x2e8, uVar7);
            if (iVar3 != 0) {
                func_0203e8cc(param_1, 0, 0x166);
                func_0203e8cc(param_1, 3, 0);
                func_02026478(param_1);
                param_1[0x93] = 8;
            }
        }
    } else {
        iVar3 = func_020bc14c();
        if (((*(s8 *)(param_1 + 0x88) == iVar3) && (iVar3 = func_02044c8c(), *(s8 *)(param_1 + 0x88) == iVar3)) &&
            (iVar3 = func_0203579c(param_1, 0x1b), iVar3 != 0)) {
            iVar3 = func_02028130(param_1);
            iVar5 = func_02028130(param_1);
            uVar7 = mulr(0x802, mulr(iVar5, iVar3));
            iVar3 = func_020aaf38((s32)data_0214f460, param_1 + 0x2e8, uVar7);
            if (iVar3 != 0) {
                iVar3 = func_02039cc4(param_1);
                if (iVar3 != 0) {
                    func_020bbe14(4, *(s8 *)(param_1 + 0x88));
                    func_02039c68(param_1);
                }
                *(s32 *)(param_1 + 0x48c) = 0;
                func_0203e908(param_1, 0x3a8);
                iVar6 = 0;
                goto LAB_end;
            }
        }
        iVar3 = func_0203567c(param_1);
        if (iVar3 != 0) {
            func_0203e8cc(param_1, 0, 0x111);
            iVar3 = func_02035164(param_1);
            func_0203e8cc(param_1, 3, iVar3);
            func_02026494(param_1);
            param_1[0x93] = 5;
        }
    }
LAB_end:
    iVar3 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 100) {
        uVar4 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = uVar4;
        if ((u16)(((u32)(u16)uVar4 * 60) >> 16) == 0) {
            iVar3 = 1;
        }
    }
    func_ov003_02179bb8(param_1, 0, 0x1f8, iVar6, 0, 1, 0, iVar3, 0x30, 0, 3, 0);
}
