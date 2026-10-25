#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_ov005_02167f00;
extern s32 func_01ffdb08(s32 a);
extern void func_020275a0(s32 a, s32 *out);
extern void func_020275b4(s32 a, s32 *out);
extern s32 func_02028130(s32 a);

void func_ov005_021625a0(u8 *p)
{
    s32 loc[3];
    s32 id;
    s32 u;

    id = func_01ffdb08(*(s16 *)data_ov005_02167f00);
    if (*(s32 *)(data_ov005_02167f00 + 4) != 0) {
        func_020275b4(id, loc);
    } else {
        func_020275a0(id, loc);
    }
    u = func_02028130(id);
    loc[2] = loc[2] + FX_Mul(u, 1229);
    *(s32 *)(p + 0x20) = loc[0] + *(s32 *)(*(u8 **)(*(u8 **)(p + 0x18)) + 4);
    *(s32 *)(p + 0x24) = loc[1] + *(s32 *)(*(u8 **)(*(u8 **)(p + 0x18)) + 8);
    *(s32 *)(p + 0x28) = loc[2] + *(s32 *)(*(u8 **)(*(u8 **)(p + 0x18)) + 0xc);
    u = func_02028130(id);
    *(s32 *)(p + 0x44) = FX_Mul(u, 1229);
    *(s32 *)(p + 0x54) = *(s16 *)(data_ov005_02167f00 + 8);
}
