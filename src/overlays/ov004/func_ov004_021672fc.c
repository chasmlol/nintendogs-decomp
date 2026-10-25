#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u32 *data_0214f464;

extern s32 func_020f5220(void);
extern void func_020f3bdc(u32);
extern void func_0203942c(u8 *);
extern s32 func_02037450(u8 *, s32);
extern s32 func_02036b94(u8 *, u8 *);
extern void func_0203e8cc(u8 *, s32, s32);
extern void func_02026bac(u8 *);
extern s32 func_02028124(u8 *);
extern void func_02026514(u8 *);
extern s32 func_02028130(u8 *);
extern void func_02025dd4(u8 *);
extern void func_02024ff0(u8 *, s32);
extern void func_02039448(u8 *);
extern void func_0202675c(u8 *);
extern void func_0203e908(u8 *, s16);

static inline u8 SwapR(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

typedef struct { u32 w[3]; } T12;

#define FXM(a, b) ((s32)((((s64)(a)) * (s64)(b) + 0x800) >> 12))

void func_ov004_021672fc(u8 *param_1)
{
    s32 iVar3;
    s32 iVar6;
    s32 zz;
    s32 aa;
    s32 uVar4;
    u32 uVar8;
    s32 bVar2;
    u32 uVar5;
    u32 uVar7;

    *(s32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    bVar2 = func_020f5220();
    if (bVar2) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    iVar6 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar6 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar6) {
        iVar6 = 0;
    } else {
        iVar6 = *(s32 *)(data_02159468 + iVar6 * 4 + 4);
    }
    if (iVar6 != 0) {
        *(T12 *)(param_1 + 0x26c) = *(T12 *)((u8 *)iVar6 + 0xbc);
        *(T12 *)(param_1 + 0x3b4) = *(T12 *)(param_1 + 0x26c);
    }
    switch (*(s32 *)(param_1 + 0x464)) {
    case 0:
        func_0203942c(param_1);
        iVar6 = func_02037450(param_1, 0x314);
        iVar3 = func_02036b94(param_1, param_1 + 0x3b4);
        if (iVar3 < 0x3000) {
            *(s32 *)(param_1 + 0x464) = 1;
            *(s32 *)(param_1 + 0x468) = 0;
            func_0203e8cc(param_1, 0, 0);
            func_02026bac(param_1);
        } else {
            iVar3 = func_02028124(param_1);
            if (iVar6 < iVar3 * 3) {
                zz = 0;
                aa = 0x8e;
                *(s32 *)(param_1 + 0x464) = 3;
                *(s32 *)(param_1 + 0x468) = zz;
                SwapByte(5, (vu8 *)(param_1 + 0x93));
                func_0203e8cc(param_1, zz, aa);
                func_02026514(param_1);
            }
        }
        break;
    case 1:
        uVar4 = func_02028130(param_1);
        if (*(s32 *)(param_1 + 0x3b8) > FXM(uVar4, 0x300c)) {
            func_0203e8cc(param_1, 0, 0x85);
        } else {
            uVar4 = func_02028130(param_1);
            if (*(s32 *)(param_1 + 0x3b8) > FXM(uVar4, 0x2008)) {
                func_0203e8cc(param_1, 0, 0x86);
            } else {
                func_0203e8cc(param_1, 0, 0x87);
            }
        }
        uVar4 = func_02028130(param_1);
        iVar6 = func_02036b94(param_1, param_1 + 0x3b4);
        if (iVar6 < FXM(uVar4, 0x300c)) {
            SwapR(0x10, (vu8 *)(param_1 + 0x93));
        } else {
            SwapR(7, (vu8 *)(param_1 + 0x93));
        }
        *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 1;
        if (0x3c < *(s32 *)(param_1 + 0x468)) {
            *(s32 *)(param_1 + 0x464) = 2;
            *(s32 *)(param_1 + 0x468) = 0;
            iVar6 = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = iVar6;
            if ((u16)(((u32)iVar6 << 16) >> 31) != 0) {
                uVar4 = func_02028124(param_1);
                *(u32 *)(param_1 + 0x46c) = FXM(uVar4, 0x120);
            } else {
                uVar4 = func_02028124(param_1);
                *(u32 *)(param_1 + 0x46c) = -FXM(uVar4, 0x120);
            }
            SwapByte(5, (vu8 *)(param_1 + 0x93));
            func_0203e8cc(param_1, 0, 0x8e);
            func_02025dd4(param_1);
        }
        break;
    case 2:
        func_02024ff0(param_1, *(s32 *)(param_1 + 0x46c));
        *(T12 *)(param_1 + 0x278) = *(T12 *)(param_1 + 0x26c);
        func_02039448(param_1);
        func_02037450(param_1, 0x310);
        *(T12 *)(param_1 + 0x26c) = *(T12 *)(param_1 + 0x278);
        *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 1;
        if (0xf < *(s32 *)(param_1 + 0x468)) {
            *(s32 *)(param_1 + 0x464) = 0;
            *(s32 *)(param_1 + 0x468) = 0;
            SwapByte(5, (vu8 *)(param_1 + 0x93));
            func_0203e8cc(param_1, 0, 0x12);
            func_0202675c(param_1);
        }
        break;
    case 3:
        *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 1;
        if (0x1e < *(s32 *)(param_1 + 0x468)) {
            *(s32 *)(param_1 + 0x464) = 0;
            *(s32 *)(param_1 + 0x468) = 0;
            SwapByte(5, (vu8 *)(param_1 + 0x93));
            func_0203e8cc(param_1, 0, 0x12);
            func_0202675c(param_1);
        }
        break;
    }
    if (*(u16 *)(param_1 + 0xfc) != 100) {
        return;
    }
    func_0203e908(param_1, 0x4c4);
}
