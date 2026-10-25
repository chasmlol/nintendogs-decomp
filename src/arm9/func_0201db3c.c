#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

static inline void SwapByte(u32 v, u8 *p) { *(u8 *)(p) = (u8)(v); }

extern void func_02026bd0(u8 *p);
extern void func_02025bb0(u8 *p);
extern s32 func_02028130(u8 *p);
extern s32 func_01ff8930(s32 v);
extern void func_0202c0ec(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern s32 func_02022dec(u8 *p, s32 a, u32 b);

void func_0201db3c(u8 *p)
{
    s32 x;

    *(u16 *)(p + 0x152) = 0x177;
    SwapByte(4, p + 151);
    func_02026bd0(p);
    func_02025bb0(p);
    x = func_01ff8930(func_02028130(p));
    *(s32 *)(p + 0x25c) = FX_Mul(x, -192);
    func_0202c0ec(p);
    func_02023654(p, 38, 1);
    if (*(u8 *)(p + 0xa3) == 0) {
        return;
    }
    if (func_02022dec(p, *(s16 *)(p + 0xf2), *(u8 *)(p + 0xa6)) == 0) {
        return;
    }
    *(s32 *)(p + 0x260) = *(s32 *)(p + 0x18c) >> 3;
    *(u32 *)(p + 0x264) = 0x668;
    *(s32 *)(p + 0x268) = *(s32 *)(p + 0x194) >> 3;
}
