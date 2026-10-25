#include "ctx.h"

extern u8 data_0213a8d4[];
extern u8 data_0214f464[];
extern u8 data_0213b5bc[];
extern u8 data_0213b5e4[];
extern u8 data_0213b4cc[];
extern s32 func_02030080(u8 *p, u32 n);
extern s32 func_02031b74(u8 *p, u32 n);
extern s32 func_020318c8(u8 *p, u32 n);
extern s32 func_0203228c(u8 *p, u32 n);
extern s32 func_0203146c(u8 *p, u32 n);
extern s32 func_0203107c(u8 *p, u32 n);
extern s32 func_020303e0(u8 *p, u32 n);
extern s32 func_02030a10(u8 *p, u32 n);

s32 func_0202fd8c(u8 *param_1, u32 param_2)
{
    int x;
    s32 x2;
    int xv;
    u32 uVar5;
    u8 *Q;
    s32 iVar5;
    u16 bp;
    u32 f;
    u32 f2;
    u32 uVar6;
    int cVar1;

    if (*(u16 *)(param_1 + 0x104) != 0) {
        return func_02030080(param_1, param_2);
    }
    x = *(s16 *)(0x152 + param_1);
    if (20 <= x && x <= 22) {
        f = 1;
        *(u16 *)(param_1 + 0xea) = 0x260;
    } else {
        f = 0;
    }
    if (f != 0) {
        return 1;
    }
    f2 = 0;
    x = *(s16 *)(param_1 + 0xf0);
    if (12 >= x) goto LZ;
    if (111 <= x) goto LZ;
    f2 = 1;
LZ:
    if (f2 != 0) {
        uVar5 = (u16)(x - 12);
        bp = *(u8 *)(param_1 + 0xa5);
        if (uVar5 < 79) goto LB0;
        if (99 > uVar5) {
            iVar5 = (10 * bp) + *(s32 *)((int)data_0213a8d4 + 0x13c);
            goto LC0;
        }
    LB0:
        iVar5 = (bp * 10) + *(s32 *)(data_0213a8d4 + uVar5 * 4);
    LC0:
        if (iVar5 != 0 && *(s16 *)(param_1 + 0xea) == *(s16 *)(iVar5 + 8) &&
            *(s8 *)(param_1 + 0x88) == *(s8 *)(*(u8 **)data_0214f464 + 7) &&
            *(u8 *)(4 + iVar5) == 0) {
            *(u16 *)(param_1 + 0xea) = param_2;
            return 1;
        }
    }
    cVar1 = *(s8 *)(param_1 + 0x8b);
    if (cVar1 == 3) goto C3;
    if (4 == cVar1) goto C4;
    if (cVar1 == 5) goto C5;
    {
        u8 *r9p = *(u8 **)(param_1 + 0x9e8);
        if (*(s16 *)(r9p + 38) < 1000) {
            return func_02031b74(param_1, param_2);
        }
        if (*(s16 *)(30 + r9p) == 10000) {
            return func_020318c8(param_1, param_2);
        }
        return func_0203228c(param_1, param_2);
    }
C3:
    {
        u8 *r4p = *(u8 **)(param_1 + 0x9e8);
        if (*(s16 *)(36 + r4p) <= (*(u16 *)(data_0213b5bc + *(s8 *)(0x8d + param_1) * 2) + 240)) goto C3b;
        Q = *(u8 **)data_0214f464;
        xv = *(u32 *)Q * 0x10dcd + 1;
        uVar5 = (u16)xv * 1500;
        *(u32 *)Q = xv;
        if ((u16)(uVar5 >> 16) > *(u16 *)(data_0213b5e4 + *(s8 *)(param_1 + 0x8d) * 2)) {
            return func_0203146c(param_1, param_2);
        }
        return func_0203228c(param_1, param_2);
    C3b:
        Q = *(u8 **)data_0214f464;
        xv = *(u32 *)Q * 0x10dcd + 1;
        *(u32 *)Q = xv;
        uVar6 = (u32)(u16)(u32)xv * 1000;
        if ((u16)(uVar6 >> 16) > *(u16 *)(data_0213b5e4 + *(s8 *)(param_1 + 0x8d) * 2)) {
            return func_0203146c(param_1, param_2);
        }
        return func_0203228c(param_1, param_2);
    }
C4:
    return func_0203107c(param_1, param_2);
C5:
    {
        u8 *r12p = *(u8 **)(0x9e8 + param_1);
        if (*(s16 *)(r12p + 28) > (s32)(*(u16 *)(data_0213b4cc + (*(u8 *)(0x11 + r12p) - 1) * 2) + 1000)) {
            return func_020303e0(param_1, param_2);
        }
        return func_02030a10(param_1, param_2);
    }
}
