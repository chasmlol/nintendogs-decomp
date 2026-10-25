#include "ctx.h"
#pragma avoid_byte strb
#pragma opt_propagation off

typedef struct { u32 w[3]; } T3;

extern s32 func_ov019_0215cca8(s32 a);
extern s32 func_ov019_0215ccd8(u8 *p);
extern void func_ov019_0215ca28(s32 a, u8 *b);
extern u32 func_ov019_021611a0(void);

static inline u32 SwapR(u32 v, vu8 *p)
{
    u32 old;
    asm {
        swpb old, v, [p]
    }
    return old;
}

u32 func_ov019_0215eacc(u8 *param_1)
{
    s32 iVar5;
    s32 iVar6;
    s32 i;
    s32 zi;
    s32 neg1;
    s32 zk1;
    s32 zk2;
    s32 k2;
    s32 sVar4;
    s32 iVar8;
    s32 iVar9;
    s32 f1;
    s32 f2;
    u32 uVar7;
    u32 uStack_30[3];
    u32 t;
    u32 t16;
    s32 v1e;
    s32 v1c;
    s32 k1;
    u8 *tb2;
    u8 *tb1;
    vu8 *pa;
    u8 *ua;

    iVar5 = func_ov019_0215cca8(*(s16 *)(param_1 + 0x2c));
    iVar6 = func_ov019_0215ccd8(param_1);
    uVar7 = iVar6;
    if (iVar6 != 0) {
        asm {
            ldrh t16, [iVar6, #32]
        }
        asm {
            add pa, iVar6, #1
        }
        asm {
            bic t16, t16, #1
        }
        asm {
            strh t16, [iVar6, #32]
        }
        uVar7 = SwapR(*(u8 *)(iVar6 + 1) & ~1, pa);
    }
    if (iVar5 == 0) {
        return uVar7;
    }
    func_ov019_0215ca28(iVar5, param_1 + 0x3c);
    *(s16 *)(param_1 + 0x1e) = 3;
    asm {
        mov i, #0
    }
    ua = (u8 *)uStack_30;
    zi = i;
    zk1 = i;
    zk2 = i;
    neg1 = -1;
    do {
        if (i < 0) {
            goto zarm;
        }
        if (i < 50) {
            goto carm;
        }
zarm:
        iVar6 = zi;
        goto a4;
carm:
        t = func_ov019_021611a0();
        iVar6 = *(s32 *)(t + i * 4 + 4);
a4:
        if (i != *(s16 *)(param_1 + 0x1c) && iVar6 != 0) {
            sVar4 = (iVar6 != 0) ? *(s16 *)(iVar6 + 0x24) : neg1;
            if (sVar4 == 7) {
                sVar4 = (iVar6 != 0) ? *(s16 *)(iVar6 + 0x1e) : neg1;
                if (sVar4 != 1) {
                    sVar4 = (iVar6 != 0) ? *(s16 *)(iVar6 + 0x1e) : neg1;
                    if (sVar4 != 3) {
                        goto next;
                    }
                }
                if (iVar6 != 0) {
                    *(T3 *)ua = *(T3 *)(iVar6 + 0x3c);
                }
                iVar8 = uStack_30[0] - *(s32 *)(param_1 + 0x3c);
                iVar9 = uStack_30[2] - *(s32 *)(param_1 + 0x44);
                f1 = (s32)(((s64)iVar8 * (s64)iVar8 + 0x800) >> 12);
                f2 = (s32)(((s64)iVar9 * (s64)iVar9 + 0x800) >> 12);
                if (f1 + f2 < 0x2400) {
                    v1c = *(s16 *)(iVar6 + 0x1c);
                    tb1 = *(u8 **)(param_1 + 0xac);
                    k1 = zk1;
                    do {
                        if (*(s16 *)(tb1 + k1 * 2 + 8) == -1) {
                            *(s16 *)(tb1 + k1 * 2 + 8) = v1c;
                            break;
                        }
                        k1 = (s16)(k1 + 1);
                    } while (k1 < 8);
                    v1e = *(s16 *)(param_1 + 0x1c);
                    tb2 = *(u8 **)(iVar6 + 0xac);
                    k2 = zk2;
                    do {
                        if (*(s16 *)(tb2 + k2 * 2 + 8) == -1) {
                            *(s16 *)(tb2 + k2 * 2 + 8) = v1e;
                            break;
                        }
                        k2 = (s16)(k2 + 1);
                    } while (k2 < 8);
                }
            }
        }
next:
        uVar7 = (u32)(i + 1) << 16;
        i = (s32)uVar7 >> 16;
    } while (i < 50);
    return uVar7;
}
