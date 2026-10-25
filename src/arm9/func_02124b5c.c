#include "ctx.h"
#pragma opt_common_subs off

u16 *func_0211b3b0(s32 a);
u16 *func_0211b2a0(s32 a);
void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02101280(s32 a, s32 b);
void func_02101118(s32 a, s32 b, s32 c, s32 d, void *e);
void *func_0210e938(void);
void func_0208b604(void *a, s32 b, s32 c, void *d);
s32 func_02112854(s32 a, s32 b);
void func_0210f14c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);

extern u8 *data_0215be48;

typedef volatile s32 vs32;

void func_02124b5c(u8 *param_1)
{
    s32 iVar1;
    s32 iVar2;
    s32 iVar6;
    s32 iVar11;
    u16 *puVar3;
    s32 iVar10;
    s32 *piVar9;
    s32 iVar8;
    void *piVar4;
    u32 uVar5;
    u8 *base;
    s32 jIV10;
    u16 *jPuv3;
    s32 *jPiv9;
    s32 jIV8;
    s32 jIV7;
    s32 kIdx;

    base = data_0215be48 + 0x1dec;
    base = (u8 *)((u32)base + 0x528);
    iVar1 = *(s32 *)(base + 0xc);
    iVar2 = *(s32 *)(base + 8);
    iVar6 = *(s32 *)(base + 0x18);

    iVar11 = 0;
    if (*(s32 *)(param_1 + 4) > 0) {
        s32 zA = 0;
        s32 zB = 0;
        s32 zC = 0;
        s32 zero = 0;
        piVar9 = (s32 *)(param_1 + 0x8c);
        iVar8 = (s32)param_1;
        do {
            puVar3 = func_0211b3b0(iVar11);
            iVar10 = zero;
            if (puVar3 != 0) {
                u8 *tp;
                func_02101894(zero, iVar1, iVar2, *(u16 *)(param_1 + (u32)iVar11 * 8 + 0x50), zero);
                func_02101280(zA, *(u16 *)(param_1 + (u32)iVar11 * 8 + 0x50));
                tp = param_1 + (u32)iVar11 * 8;
                func_02101118(zB, iVar6, *(u16 *)(tp + 0x50), *(u16 *)(tp + 0x52), puVar3 + 0x3c);
                if (*(s32 *)(param_1 + 0x1c) == 1) {
                    iVar10 = 2;
                }
                piVar4 = func_0210e938();
                func_0208b604(piVar4, puVar3[0], *(u8 *)(puVar3 + 1), piVar9);
                uVar5 = func_02112854(2, *(u16 *)(param_1 + (u32)iVar11 * 8 + 0x4e));
                func_0210f14c(2, *(u16 *)(param_1 + (u32)iVar11 * 8 + 0x4e), uVar5, *(s32 *)(iVar8 + 0x8c),
                              *(s32 *)(iVar8 + 0x90), *(s32 *)(iVar8 + 0x94), zC, iVar10);
            }
            iVar11++;
            piVar9 += 3;
            iVar8 += 0xc;
        } while (iVar11 < *(s32 *)(param_1 + 4));
    }
    kIdx = 0;
    if (*(s32 *)(param_1 + 8) > 0) {
        s32 iStack_38;
        s32 zD;
        s32 zE;
        s32 zF;
        jPiv9 = (s32 *)(param_1 + 0xb0);
        jIV8 = (s32)param_1;
        zD = kIdx;
        zE = kIdx;
        zF = kIdx;
        iStack_38 = kIdx;
        do {
            jPuv3 = func_0211b2a0(kIdx);
            jIV10 = iStack_38;
            if (jPuv3 != 0) {
                u8 *tp;
                jIV7 = kIdx + 3;
                func_02101894(jIV10, iVar1, iVar2, *(u16 *)(param_1 + (u32)jIV7 * 8 + 0x50), jIV10);
                func_02101280(zD, *(u16 *)(param_1 + (u32)jIV7 * 8 + 0x50));
                tp = param_1 + (u32)jIV7 * 8;
                func_02101118(zE, iVar6, *(u16 *)(tp + 0x50), *(u16 *)(tp + 0x52), jPuv3 + 0x3c);
                if (*(s32 *)(param_1 + 0x1c) == 0) {
                    jIV10 = 2;
                }
                piVar4 = func_0210e938();
                func_0208b604(piVar4, jPuv3[0], *(u8 *)(jPuv3 + 1), jPiv9);
                uVar5 = func_02112854(2, *(u16 *)(param_1 + (u32)jIV7 * 8 + 0x4e));
                func_0210f14c(2, *(u16 *)(param_1 + (u32)jIV7 * 8 + 0x4e), uVar5, *(s32 *)(jIV8 + 0xb0),
                              *(s32 *)(jIV8 + 0xb4), *(s32 *)(jIV8 + 0xb8), zF, jIV10);
            }
            kIdx++;
            jPiv9 += 3;
            jIV8 += 0xc;
        } while (kIdx < *(s32 *)(param_1 + 8));
    }
}
