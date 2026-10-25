#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 data_02159468[];

extern void func_020c7820(u8 *p, u32 *p2, u32 a, u32 b, u32 c);

void func_020f3700(u8 *p, u32 *p2)
{
    s32 v;
    u32 uVar6;
    s32 t;
    u32 *puVar2;

    v = *(s32 *)(p + 0xb4);
    if (v <= 0) {
        v = -v;
    }
    if (v < 164) {
        func_020c7820(p, p2, 0xd9d, 0xfb2, 0);
        return;
    }
    func_020c7820(p, p2, 0xd9d, 0xe6a, 0);
    puVar2 = *(u32 **)data_02159468;
    uVar6 = *puVar2 * 0x10dcd + 1;
    *puVar2 = uVar6;
    t = ((s32)((u16)(uVar6 & 0xfff) << 16) >> 15) - 4096;
    *(s32 *)(p + 0xb0) = *(s32 *)(p + 0xb0) + FX_Mul(*(s32 *)(p + 0xb4), t);
    puVar2 = *(u32 **)data_02159468;
    uVar6 = *puVar2 * 0x10dcd + 1;
    *puVar2 = uVar6;
    t = ((s32)((u16)(uVar6 & 0xfff) << 16) >> 15) - 4096;
    *(s32 *)(p + 0xb8) = *(s32 *)(p + 0xb8) + FX_Mul(*(s32 *)(p + 0xb4), t);
    if (*(s32 *)(p + 0xb0) > 2460) {
        *(s32 *)(p + 0xb0) = 2460;
    }
    if (*(s32 *)(p + 0xb4) > 2460) {
        *(s32 *)(p + 0xb4) = 2460;
    }
    if (*(s32 *)(p + 0xb8) > 2460) {
        *(s32 *)(p + 0xb8) = 2460;
    }
    if (*(s32 *)(p + 0xb0) < -2460) {
        *(s32 *)(p + 0xb0) = -2460;
    }
    if (*(s32 *)(p + 0xb4) < -2460) {
        *(s32 *)(p + 0xb4) = -2460;
    }
    if (*(s32 *)(p + 0xb8) < -2460) {
        *(s32 *)(p + 0xb8) = -2460;
    }
}
