#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02159034;
extern u16 data_0212fcc4;
extern void func_0206c7bc(u32 a, void *p, u32 n);
extern void func_020942c0(s16 *p, int n);

u32 func_02093500(u32 *param_1, u8 *param_2, int param_3, u8 param_4)
{
    u8 *puVar10;
    s32 p3;
    u8 *p2;
    u8 p4;
    u32 uVar9;
    s32 iVar8;
    s16 k;
    u8 zero;
    u32 w0;
    u32 w1;
    s16 *psVar5;
    s16 loc[2];
    u32 c568;
    u32 *pg;

    pg = (u32 *)&data_02159034;
    asm { mov r12, param_3, lsl #16 }
    uVar9 = 0;
    puVar10 = *(u8 **)((u8 *)*pg + 0x141c);
    asm { ldr c568, =0x568 }
    psVar5 = (s16 *)&data_0212fcc4;
    asm { mov p2, param_2 }
    asm { mov p4, param_4 }
    iVar8 = uVar9;
    puVar10 = puVar10 + c568;
    asm { mov p3, r12, asr #16 }
top:
    if (psVar5[0] != 4) {
        goto inc;
    }
    if (psVar5[1] != p3) {
        goto inc;
    }
    if (*(s8 *)(puVar10 + 14) != 0) {
        goto inc;
    }
    uVar9 = 1;
    if (param_1 != 0) {
        w0 = param_1[0];
        w1 = param_1[1];
        ((u32 *)puVar10)[0] = w0;
        ((u32 *)puVar10)[1] = w1;
    } else {
        vu16 z;
        z = 0;
        func_0206c7bc(z, puVar10, 8);
    }
    k = 0;
    zero = 0;
    do {
        if (p2 != 0) {
            (puVar10 + k)[8] = p2[k];
        } else {
            (puVar10 + k)[8] = zero;
        }
        k = (s16)(k + 1);
    } while (k < 6);
    puVar10[14] = p4;
    puVar10[15] = iVar8;
    goto done;
inc:
    iVar8 = (s16)(iVar8 + 1);
    psVar5 = psVar5 + 2;
    puVar10 = puVar10 + 16;
    if (iVar8 < 20) {
        goto top;
    }
done:
    loc[0] = 4;
    loc[1] = p3;
    func_020942c0(loc, 1);
    return uVar9;
}
