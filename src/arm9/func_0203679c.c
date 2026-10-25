#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_020271e8(u8 *p, s32 *a, u32 n);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);
extern s32 func_02009dfc(s32 *a, s32 *b, s32 *c);
extern s32 func_02067df0(s32 *a, s32 *b);
extern s32 func_02009d34(s32 *a, s32 *b, s32 *c);

void func_0203679c(u8 *p)
{
    s32 v1[12];
    s32 a3[3];
    s32 v2[3];
    s32 r;
    s32 x;
    s32 y;

    func_02067e34((s32 *)(p + 0x3b4), (s32 *)(p + 0x2a0), a3);
    func_020271e8(p, v1, 12);
    func_01ff810c(v1, (s32 *)(p + 0x1e0), v1);
    v2[0] = v1[0];
    v2[1] = v1[1];
    v2[2] = v1[2];
    if (*(s8 *)(p + 0x93) >= 10) {
        SwapByte(0, (vu8 *)(p + 0x96));
    } else {
        r = func_02009dfc(a3, (s32 *)(p + 0x1a4), (s32 *)(p + 0x18c));
        SwapByte(r, (vu8 *)(p + 0x96));
    }
    x = *(s8 *)(p + 0x96);
    switch (x) {
    case 0:
        y = *(s8 *)(p + 0x95);
        switch (y) {
        case 1:
            SwapByte(5, (vu8 *)(p + 0x95)); return;
        case 2:
            SwapByte(6, (vu8 *)(p + 0x95)); return;
        case 4:
            r = func_02009d34(v2, (s32 *)(p + 0x1a4), (s32 *)(p + 0x18c));
            if (r == 0) {
                r = SwapByte(0, (vu8 *)(p + 0x95));
            }
            return;
        case 5:
        case 6:
            r = func_02067df0(v2, (s32 *)(p + 0x1a4));
            if (r > 0) {
                r = SwapByte(4, (vu8 *)(p + 0x95));
            }
            return;
        default:
            goto fin;
        }
    case 1:
        y = *(s8 *)(p + 0x95);
        switch (y) {
        case 0:
            SwapByte(4, (vu8 *)(p + 0x95)); return;
        case 2:
            SwapByte(6, (vu8 *)(p + 0x95)); return;
        case 4:
            r = func_02067df0(v2, (s32 *)(p + 0x18c));
            if (r > 0) {
                r = SwapByte(1, (vu8 *)(p + 0x95));
            }
            return;
        case 5:
            SwapByte(1, (vu8 *)(p + 0x95)); return;
        case 6:
            r = func_02009d34(v2, (s32 *)(p + 0x1a4), (s32 *)(p + 0x18c));
            if (r == 0) {
                r = SwapByte(4, (vu8 *)(p + 0x95));
            }
            return;
        default:
            goto fin;
        }
    case 2:
        y = *(s8 *)(p + 0x95);
        switch (y) {
        case 0:
            SwapByte(4, (vu8 *)(p + 0x95)); return;
        case 1:
            SwapByte(5, (vu8 *)(p + 0x95)); return;
        case 4:
            r = func_02067df0(v2, (s32 *)(p + 0x18c));
            if (r < 0) {
                r = SwapByte(2, (vu8 *)(p + 0x95));
            }
            return;
        case 5:
            r = func_02009d34(v2, (s32 *)(p + 0x1a4), (s32 *)(p + 0x18c));
            if (r == 0) {
                r = SwapByte(4, (vu8 *)(p + 0x95));
            }
            return;
        case 6:
            SwapByte(2, (vu8 *)(p + 0x95)); return;
        default:
            goto fin;
        }
    default:
        return;
    }
fin:
    return;
}
