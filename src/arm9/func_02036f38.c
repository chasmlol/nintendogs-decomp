#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0214f464[];
extern s32 func_0206782c(s32 a);
extern s32 func_01ff8930(s32 a);
extern void func_0203292c(u8 *p);
extern void func_02039008(u8 *p, s32 *a, u32 *b, u32 *c, u32 *d);
extern void func_02037dac(u8 *p, u32 a);


#define FX(x, y) ((s32)((((s64)(x) * (y)) + 0x800) >> 12))

s32 func_02036f38(u8 *param_1, u32 param_2, u32 param_3)
{
    u8 *p = param_1;
    u32 flags = param_2;
    u32 local_30[3];
    s32 st, k, r6, ia, ib, f1, f2, iVar5, iVar6;

    local_30[1] = 0;
    local_30[2] = 0;
    ia = *(s32 *)(param_1 + 0x26c) - *(s32 *)(param_1 + 0x2a0);
    ib = *(s32 *)(param_1 + 0x274) - *(s32 *)(param_1 + 0x2a8);
    iVar5 = FX(ia, ia) + FX(ib, ib);
    iVar6 = func_0206782c(iVar5);
    iVar6 = func_01ff8930(iVar6);
    f1 = FX(ia, iVar6);
    f2 = FX(ib, iVar6);

    st = *(s8 *)(param_1 + 0xa0);
    switch (st) {
    case 0:
        *(vu8 *)(param_1 + 160) = 1;
        *(vu8 *)(param_1 + 161) = 5;
        break;
    case 1:
    {
        if ((param_2 & 0x80) != 0) {
            func_0203292c(param_1);
        }
        func_02039008(param_1, (s32 *)(param_1 + 0x278), &local_30[0], &local_30[1], &local_30[2]);
        switch (param_3) {
        case 0:
            *(u16 *)(param_1 + 0x152) = 0x11;
            r6 = FX(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc), 57);
            *(u32 *)(param_1 + 0x240) = 0;
            k = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
            *(s32 *)(param_1 + 0x244) = FX(k, 272);
            *(u32 *)(param_1 + 0x24c) = 0xcd0;
            *(u32 *)(param_1 + 0x250) = *(u32 *)(param_1 + 0x240);
            *(u32 *)(param_1 + 0x254) = *(u32 *)(param_1 + 0x244);
            *(u32 *)(param_1 + 0x258) = *(u32 *)(param_1 + 0x24c);
            break;
        case 1:
            *(u16 *)(param_1 + 0x152) = 0x12;
            r6 = FX(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc), 109);
            *(u32 *)(param_1 + 0x240) = 0;
            k = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
            *(s32 *)(param_1 + 0x244) = FX(k, 544);
            *(u32 *)(param_1 + 0x24c) = 0xcd0;
            *(u32 *)(param_1 + 0x250) = *(u32 *)(param_1 + 0x240);
            *(u32 *)(param_1 + 0x254) = *(u32 *)(param_1 + 0x244);
            *(u32 *)(param_1 + 0x258) = *(u32 *)(param_1 + 0x24c);
            break;
        case 2:
            *(u16 *)(param_1 + 0x152) = 0x13;
            r6 = FX(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc), 170);
            *(u32 *)(param_1 + 0x240) = 0;
            k = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
            *(s32 *)(param_1 + 0x244) = FX(k, 832);
            *(u32 *)(param_1 + 0x24c) = 0xcd0;
            *(u32 *)(param_1 + 0x250) = *(u32 *)(param_1 + 0x240);
            *(u32 *)(param_1 + 0x254) = *(u32 *)(param_1 + 0x244);
            *(u32 *)(param_1 + 0x258) = *(u32 *)(param_1 + 0x24c);
            break;
        case 3:
            *(u16 *)(param_1 + 0x152) = 0x14;
            r6 = FX(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc), 205);
            *(u32 *)(param_1 + 0x240) = 0;
            k = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
            *(s32 *)(param_1 + 0x244) = FX(k, 1024);
            *(u32 *)(param_1 + 0x24c) = 0xcd0;
            *(u32 *)(param_1 + 0x250) = *(u32 *)(param_1 + 0x240);
            *(u32 *)(param_1 + 0x254) = *(u32 *)(param_1 + 0x244);
            *(u32 *)(param_1 + 0x258) = *(u32 *)(param_1 + 0x24c);
            break;
        case 4:
            *(u16 *)(param_1 + 0x152) = 0x15;
            r6 = FX(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc), 280);
            *(u32 *)(param_1 + 0x240) = 0;
            k = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
            *(s32 *)(param_1 + 0x244) = FX(k, 1280);
            *(u32 *)(param_1 + 0x24c) = 0xcd0;
            *(u32 *)(param_1 + 0x250) = *(u32 *)(param_1 + 0x240);
            *(u32 *)(param_1 + 0x254) = *(u32 *)(param_1 + 0x244);
            *(u32 *)(param_1 + 0x258) = *(u32 *)(param_1 + 0x24c);
            break;
        case 5:
            *(u16 *)(param_1 + 0x152) = 0x16;
            r6 = FX(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc), 435);
            *(u32 *)(param_1 + 0x240) = 0;
            k = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
            *(s32 *)(param_1 + 0x244) = FX(k, 1536);
            *(u32 *)(param_1 + 0x24c) = 0xcd0;
            *(u32 *)(param_1 + 0x250) = *(u32 *)(param_1 + 0x240);
            *(u32 *)(param_1 + 0x254) = *(u32 *)(param_1 + 0x244);
            *(u32 *)(param_1 + 0x258) = *(u32 *)(param_1 + 0x24c);
            break;
        }
        *(s32 *)(param_1 + 0x260) = *(s32 *)(param_1 + 0x260) + (s32)((((s64)f1 * r6) + 0x800) >> 12);
        *(s32 *)(param_1 + 0x268) = *(s32 *)(param_1 + 0x268) + (s32)((((s64)f2 * r6) + 0x800) >> 12);
    }
        break;
    }
fin:
    if ((param_2 & 0x100) != 0) {
        func_02037dac(param_1, local_30[0]);
    }
    return iVar5;
}
