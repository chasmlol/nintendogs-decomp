#include "ctx.h"
#pragma opt_propagation off

extern u32 data_021592e4;
extern u32 data_02159074;
extern void func_02072fe4();
extern void func_02070ac8();

u32 func_020a202c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 pp4 = param_4;
    u32 pp1 = param_1;
    u32 pp2 = param_2;
    u32 pp3 = param_3;
    u8 *base = (u8 *)&data_021592e4;
    s16 j;
    u32 *piVar7;
    u16 flags = *(u16 *)(base + 28);
    s16 i;
    u16 bit2;

    i = 0;
    do {
        u16 bit1 = (u16)(1u << i);
        if ((flags & bit1) != 0 && pp2 == *(u16 *)(base + i * 2 + 8) && *(u32 *)(base + i * 4 + 0x28) != 0) {
            *(u16 *)(base + 30) = *(u16 *)(base + 30) | bit1;
            return i;
        }
        i = (s16)(i + 1);
    } while (i < 4);
    {
        u8 *q = (u8 *)&data_021592e4;
        u16 d24 = *(u16 *)(q + 24);
        j = 0;
        do {
            bit2 = (u16)(1u << j);
            if ((d24 & bit2) == 0) {
                *(u16 *)(q + 24) = *(vu16 *)(q + 24) | bit2;
                goto found;
            }
            j = (s16)(j + 1);
        } while (j < 4);
        j = -1;
    }
found:
    if (j != -1) {
        u32 sh;
        sh = 1u << j;
        piVar7 = (u32 *)(base + 40) + j;
        bit2 = (u16)sh;
        func_02072fe4(piVar7, pp1, pp2);
        func_02070ac8(piVar7, pp3, pp4);
        *(u16 *)(base + j * 2) = (u16)pp1;
        *(u16 *)(base + j * 2 + 8) = (u16)pp2;
        *(u16 *)(base + 28) = *(u16 *)(base + 28) | bit2;
        *(u16 *)(base + 30) = *(u16 *)(base + 30) | bit2;
        *(u16 *)(base + j * 2 + 16) = (u16)pp3;
        if (*(u32 *)((u8 *)&data_02159074 + 0x1c) != 0) {
            func_02070ac8(piVar7, 0, 0);
        }
    }
    return j;
}
