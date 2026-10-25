#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off

extern s32 func_020038b8(u32 *p, u32 n);
extern void func_0206c7f0(s32 a, u32 *b, u32 n);


u32 *func_0208e5ac(u32 *param_1, u16 param_2, s32 param_3, u8 *param_4, u32 param_5)
{
    u32 p5c;
    u8 *base;
    u32 k;
    s32 i;
    u8 *e;
    u32 *puVar2;
    u32 uVar5;
    u16 z;

    p5c = param_5;
    base = (u8 *)func_020038b8(param_1, param_3 << 5);
    i = 0;
    if (param_3 > 0) {
        u32 vA;
        u32 vB;
        vu32 vC;
        z = 0;
        vB = 0;
        vA = 0;
        k = 0x1000;
        do {
            puVar2 = (u32 *)vA;
            if (*(s32 *)(param_4 + 4) != 0) {
                uVar5 = (u32)(*(u8 *)(*(s32 *)(param_4 + 4) + 0x18) * 2 + 0x1c) & 0xfffffffc;
                puVar2 = (u32 *)func_020038b8(param_1, uVar5);
                vC = vB;
                func_0206c7f0(vC, puVar2, uVar5);
            }
            e = base + i * 32;
            e[0] = z;
            e[1] = z;
            *(u16 *)(e + 2) = z;
            *(u16 *)(e + 4) = z;
            *(u16 *)(e + 6) = z;
            *(u32 *)(e + 8) = k;
            *(u32 *)(e + 0xc) = z;
            *(u16 *)(e + 0x10) = param_2;
            *(u16 *)(e + 0x12) = z;
            *(u8 **)(e + 0x14) = param_4;
            *(u32 **)(e + 0x18) = puVar2;
            *(u32 *)(e + 0x1c) = p5c;
            i = i + 1;
        } while (i < param_3);
    }
    return (u32 *)base;
}
