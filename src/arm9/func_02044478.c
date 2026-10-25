#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_loop_invariants off
#pragma opt_common_subs off

extern u8 data_02136e64[];
extern u8 data_021369c4[];



void func_02044478(u32 *param_1, s32 param_2, s32 param_3, u16 *param_4, u8 *param_5)
{
    u8 *pb;
    s16 idx;
    s16 mx;
    s16 i;
    s16 z;
    s32 j;
    s32 k;
    u8 *base;
    u8 *ent;
    u32 uVar8;
    u16 uVar2;
    s16 v;

    pb = param_5;
    idx = 0;
    mx = idx;
    i = idx;
    z = idx;
    do {
        ((s16 *)param_4)[i] = z;
        i = (s16)(i + 1);
    } while (i < 10);
    base = data_02136e64 + param_3 * 440 + param_2 * 2;
    j = z;
    do {
        ent = base + j * 88;
        uVar2 = *(u16 *)(ent + 0x2c);
        uVar8 = *param_1 * 0x10dcd + 1;
        *param_1 = uVar8;
        param_4[j] = (u16)(*(u16 *)(base + j * 88) + (u16)(((u32)uVar2 * (u16)uVar8) >> 16));
        v = ((s16 *)param_4)[j];
        if (v > mx) {
            mx = v;
            idx = (s16)j;
        }
        j = (s16)(j + 1);
    } while (j < 5);
    k = 5;
    do {
        s32 t = k - 5;
        uVar2 = *(u16 *)(data_021369c4 + idx * 16 + t * 2 + 8);
        uVar8 = *param_1 * 0x10dcd + 1;
        *param_1 = uVar8;
        param_4[k] = (u16)(*(u16 *)(data_021369c4 + idx * 16 + t * 2) + (u16)(((u32)uVar2 * (u16)uVar8) >> 16));
        k = (s16)(k + 1);
    } while (k < 9);
    switch (idx) {
    case 0:
        *(u8 *)(pb + 1) = (u8)(1);
        { *(u8 *)(pb) = (u8)(0); return; }
    case 1: {
        u32 zz = 0;
        *(u8 *)(pb + 1) = (u8)(zz);
        { *(u8 *)(pb) = (u8)(zz); return; }
    }
    case 2:
        *(u8 *)(pb + 1) = (u8)(23);
        { *(u8 *)(pb) = (u8)(0); return; }
    case 3:
        *(u8 *)(pb + 1) = (u8)(22);
        { *(u8 *)(pb) = (u8)(0); return; }
    case 4:
        *(u8 *)(pb + 1) = (u8)(21);
        { *(u8 *)(pb) = (u8)(0); return; }
    default: {
        u32 zz = 0;
        *(u8 *)(pb + 1) = (u8)(zz);
        { *(u8 *)(pb) = (u8)(zz); return; }
    }
    }
}
