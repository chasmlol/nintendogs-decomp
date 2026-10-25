#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u8 data_02159034[];
extern s32 data_0212fc74[];
extern s16 data_0212fcc4[];
extern void func_0206c7bc(u32 v, u8 *p, u32 n);
extern void func_020942c0(s16 *p, u32 n);

void func_02093a04(s32 p1)
{
    u8 *iVar3;
    s32 *pc;
    s32 iVar4;
    vu16 z;
    s16 loc[2];
    s32 iVar7;
    s32 iVar8;
    s16 *psVar7;
    u8 *ent;
    u8 *src;
    s32 v;
    s32 j;
    s32 iVar6;
    s32 tv;
    s16 pv1;
    s16 k;
    u32 t0;
    u32 t1;

    iVar6 = 0x1869f;
    iVar3 = *(u8 **)((u8 *)*(u8 **)data_02159034 + 4096 + 0x41c);
    pc = (s32 *)(iVar3 + 4);
    iVar4 = pc[2];
    pc[2] = iVar4 + p1;
    if (pc[2] > iVar6) {
        pc[2] = iVar6;
    } else if (pc[2] < 0) {
        pc[2] = 0;
    }
    iVar6 = *(s16 *)(iVar3 + 0x76);
    if (iVar6 < 20) {
        iVar8 = 0;
        j = 0;
        v = pc[2];
        do {
            tv = data_0212fc74[j];
            if (tv < 0 || v < tv) break;
            iVar8 = j;
            j = (s16)(j + 1);
        } while (j < 20);
        if (iVar8 > 20) iVar8 = 20;
        if (iVar8 > iVar6) {
            iVar7 = (s16)(iVar6 + 1);
            if (iVar7 <= iVar8) {
                psVar7 = data_0212fcc4 + iVar7 * 2;
                ent = iVar3 + 0x568 + iVar7 * 16;
                src = 0;
                do {
                    if (iVar7 < 20 && psVar7[0] != -1 && *(s8 *)(ent + 14) == 0) {
                        if (src) {
                            t0 = ((u32 *)src)[0];
                            t1 = ((u32 *)src)[1];
                            ((u32 *)ent)[0] = t0;
                            ((u32 *)ent)[1] = t1;
                        } else {
                            z = (u32)src;
                            func_0206c7bc(z, ent, 8);
                        }
                        k = 0;
                        do {
                            if (src) {
                                (ent + k)[8] = *(u8 *)(u32)k;
                            } else {
                                (ent + k)[8] = (u8)(u32)src;
                            }
                            k = (s16)(k + 1);
                        } while (k < 6);
                        *(u8 *)(ent + 14) = 2;
                        *(u8 *)(ent + 15) = (u8)iVar7;
                        pv1 = psVar7[1];
                        loc[0] = psVar7[0];
                        loc[1] = pv1;
                        func_020942c0(loc, 1);
                    }
                    iVar7 = (s16)(iVar7 + 1);
                    psVar7 += 2;
                    ent += 16;
                } while (iVar7 <= iVar8);
            }
            *(s16 *)(iVar3 + 0x76) = iVar8;
            *(u16 *)(iVar3 + 0x6ae) = *(u16 *)(iVar3 + 0x6ae) | 1;
        }
    }
    if (iVar4 != pc[2]) {
        *(u16 *)(iVar3 + 0x6ae) = *(u16 *)(iVar3 + 0x6ae) | 1;
    }
}
