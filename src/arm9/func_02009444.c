#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off

typedef struct { u32 w[3]; } T12;

extern u8 data_0215be34[];
extern s32 func_02028130(u8 *p);
extern s32 *func_0208122c(s32 a, s32 b, s32 *c);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

s32 func_02009444(u8 *param_1, s32 param_2, u8 param_3, u8 param_4, s32 param_5, s16 param_6, u32 *param_7, s32 *param_8, u32 param_9)
{
    s32 iVar7;
    s32 *piVar3;
    u8 *iVar10;
    u8 *iVar9;
    s32 r0v;
    u32 off;

    iVar7 = 0;
    do {
        if (*(s32 *)(param_1 + iVar7 * 4 + 0x8fc) == 0) goto L48;
        iVar7 = (s16)(iVar7 + 1);
    } while (iVar7 < 7);
    iVar7 = -1;
L48:
    if (iVar7 == -1) return -1;

    piVar3 = func_0208122c(*(u32 *)data_0215be34 ? *(s32 *)*(u32 *)data_0215be34 : 0, param_2, (s32 *)(param_1 + 0x2a0));
    *(s32 **)(param_1 + iVar7 * 4 + 0x8fc) = piVar3;
    iVar10 = param_1 + iVar7 * 2;
    iVar9 = param_1 + iVar7;
    *(s16 *)(iVar10 + 0x81c) = (s16)param_2;
    *(iVar9 + 0x82a) = param_3;
    *(iVar9 + 0x831) = param_4;
    *(iVar9 + 0x838) = (u8)param_5;
    *(iVar9 + 0x83f) = (u8)param_9;
    *(s16 *)(iVar10 + 0x846) = param_6;
    if (param_7 == 0) goto z7;
    off = (u32)iVar7 * 12;
    *(T12 *)(param_1 + off + 0x854) = *(T12 *)param_7;
    goto a7;
z7:
    off = (u32)iVar7 * 12;
    *(s32 *)(param_1 + off + 0x854) = 0;
    *(s32 *)(param_1 + iVar7 * 12 + 0x858) = 0;
    *(s32 *)(param_1 + iVar7 * 12 + 0x85c) = 0;
a7:
    if (param_8 != 0) {
        if (param_5 <= 1) {
            *(T12 *)(param_1 + off + 0x8a8) = *(T12 *)param_8;
        } else {
            r0v = func_02028130(param_1);
            *(s32 *)(param_1 + iVar7 * 12 + 0x8a8) = FX_Mul(param_8[0], r0v);
            *(s32 *)(param_1 + iVar7 * 12 + 0x8ac) = FX_Mul(param_8[1], r0v);
            *(s32 *)(param_1 + iVar7 * 12 + 0x8b0) = FX_Mul(param_8[2], r0v);
        }
    } else {
        *(s32 *)(param_1 + iVar7 * 12 + 0x8a8) = 0;
        *(s32 *)(param_1 + iVar7 * 12 + 0x8ac) = 0;
        *(s32 *)(param_1 + iVar7 * 12 + 0x8b0) = 0;
    }
    return iVar7;
}
