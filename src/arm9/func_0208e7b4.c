#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 w0;
    s16 h4;
    s16 h6;
    u32 w8;
    u32 wc;
    u32 w10;
    u8 b14;
    u8 b15;
    u16 h16;
    u16 h18;
    u16 h1a;
    u32 w1c;
    u32 w20;
} Ent;

extern s16 data_021408d4;
extern void *func_020038b8(u8 *p, u32 n);
extern void func_0206c7f0(u32 a, void *p, u32 n);

static inline void SwapZero(u16 z, u8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(z);
}

Ent *func_0208e7b4(u8 *param_1, s32 param_2, u8 *param_3)
{
    Ent *puVar3;
    s32 iVar5;
    void *puVar4;
    u32 uVar7;
    Ent *puVar6;
    u16 zero;
    u32 z2;
    vu32 a0;

    puVar3 = (Ent *)func_020038b8(param_1, param_2 * 36);
    iVar5 = 0;
    if (param_2 > 0) {
        puVar6 = puVar3;
        z2 = 0;
        zero = 0;
        do {
            puVar4 = 0;
            if (*(u8 **)(param_3 + 4) != 0) {
                uVar7 = (*(*(u8 **)(param_3 + 4) + 0x17) * 2 + 0x1c) & 0xfffffffc;
                puVar4 = func_020038b8(param_1, uVar7);
                a0 = z2;
                func_0206c7f0(a0, puVar4, uVar7);
            }
            puVar6->w0 = zero;
            puVar6->h4 = data_021408d4;
            puVar6->h6 = data_021408d4;
            iVar5 = (s16)(iVar5 + 1);
            puVar6->w8 = 0x1000;
            puVar6->wc = (u32)param_3;
            puVar6->w10 = (u32)puVar4;
            SwapZero(zero, (u8 *)&puVar6->b14);
            SwapZero(zero, (u8 *)&puVar6->b15);
            puVar6->h16 = zero;
            puVar6->h18 = zero;
            puVar6->h1a = zero;
            puVar6->w1c = 0x1000;
            puVar6->w20 = zero;
            puVar6 = puVar6 + 1;
        } while (iVar5 < param_2);
    }
    return puVar3;
}
