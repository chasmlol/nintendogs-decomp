#pragma avoid_byte strb
#include "ctx.h"

typedef volatile s16 vs16;

extern s32 data_0213b7d0[];
extern u8 *data_0214f464;
extern s32 func_0202d6ec(u8 *p);
extern s32 func_0202dc50(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_020bc14c(s32 *a);
extern void func_020bbe14(s32 a, s32 b);
extern u8 *func_020bc3c4(void);

static inline void SwapByte(u32 v, vu8 *p)
{
    asm { swpb r0, v, [p] }
}

#define RESET_BODY(p, q) \
    do { \
        u16 z = 0; \
        SwapByte(z, (vu8 *)((p) + 168)); \
        *(u16 *)((q) + 18) = z; \
        *(s16 *)((p) + 240) = 111; \
        SwapByte(z, (vu8 *)((p) + 165)); \
        SwapByte(z, (vu8 *)((p) + 163)); \
    } while (0)

#define C2_BODY(p, q, v) \
    do { \
        u16 z = 0; \
        SwapByte(z, (vu8 *)((p) + 168)); \
        *(u16 *)((q) + 18) = z; \
        *(s16 *)((p) + 240) = 75; \
        SwapByte((v), (vu8 *)((p) + 165)); \
    } while (0)

s32 func_0202d108(u8 *param_1, s32 param_2, s32 param_3, s32 param_4)
{
    s32 x;
    s32 r6v;
    s32 bv;
    s32 cVar1;
    s32 x2;
    s32 x1;
    u8 *qq;
    s32 sV;
    s32 iv5;
    s32 g;

    qq = param_1 + 256;
    if (*(u16 *)(qq + 18) != 0) {
        return 0;
    }
    x = *(s16 *)(param_1 + 240);
    switch (x) {
    case 111:
        return 0;
    case 1:
        if (param_4 != 0) {
            func_0202d6ec(param_1);
        }
        return 1;
    case 2:
        if (param_4 == 0) goto E2;
        sV = *(vs16 *)(param_1 + 0xf0);
        if (sV < 4) goto g2a;
        if (sV <= 8) { g = 1; goto g2b; }
    g2a:
        if (sV == 0x57) { g = 1; goto g2b; }
        iv5 = *(s16 *)(param_1 + 0xea);
        if (iv5 < 15) goto g2c;
        if (iv5 <= 75) { g = 1; goto g2b; }
    g2c:
        if (iv5 < 0x119) goto g2d;
        if (iv5 <= 0x13c) { g = 1; goto g2b; }
    g2d:
        g = 0;
    g2b:
        if (g != 0) { g = 0; goto g2e; }
        iv5 = *(s16 *)(param_1 + 0xea);
        if (iv5 < 0x478) goto g2f;
        if (iv5 <= 0x47e) { g = 0; goto g2e; }
    g2f:
        if (iv5 < 0x4c7) goto g2g;
        if (iv5 <= 0x4ca) { g = 0; goto g2e; }
    g2g:
        if (sV == 0x53) { g = 0; goto g2e; }
        g = (sV == 0x54) ? 0 : 1;
    g2e:
        if (g == 0) goto E2;
        C2_BODY(param_1, param_1 + 256, 1);
    E2:
        return 1;
    case 3:
        if (param_4 == 0) goto E3;
        if (param_3 == 0) goto L2a0;
        sV = *(vs16 *)(param_1 + 0xf0);
        if (sV < 4) goto g3a;
        if (sV <= 8) { g = 1; goto g3b; }
    g3a:
        if (sV == 0x57) { g = 1; goto g3b; }
        iv5 = *(s16 *)(param_1 + 0xea);
        if (iv5 < 15) goto g3c;
        if (iv5 <= 75) { g = 1; goto g3b; }
    g3c:
        if (iv5 < 0x119) goto g3d;
        if (iv5 <= 0x13c) { g = 1; goto g3b; }
    g3d:
        g = 0;
    g3b:
        if (g != 0) { g = 0; goto g3e; }
        iv5 = *(s16 *)(param_1 + 0xea);
        if (iv5 < 0x478) goto g3f;
        if (iv5 <= 0x47e) { g = 0; goto g3e; }
    g3f:
        if (iv5 < 0x4c7) goto g3g;
        if (iv5 <= 0x4ca) { g = 0; goto g3e; }
    g3g:
        if (sV == 0x53) { g = 0; goto g3e; }
        g = (sV == 0x54) ? 0 : 1;
    g3e:
        if (g == 0) goto E3;
        C2_BODY(param_1, param_1 + 256, 2);
        goto E3;
    L2a0:
        RESET_BODY(param_1, param_1 + 256);
    E3:
        return 1;
    case 4:
        if (param_4 == 0) goto E4;
        cVar1 = *(s8 *)(param_1 + 0x88);
        bv = 1;
        r6v = data_0213b7d0[param_2];
        if (cVar1 != func_020bc14c(data_0213b7d0)) {
            if (cVar1 != *(s8 *)(data_0214f464 + 7)) {
                bv = 0;
            }
        }
        if (bv == 0) goto L3dc;
        switch ((u32)r6v) {
        default:
        case 0:
        case 3:
            func_020bbe14(5, cVar1);
            break;
        case 1:
            if (*(u16 *)(param_1 + 0xf2) == 28) {
                func_020bbe14(11, cVar1);
            } else {
                func_020bbe14(7, cVar1);
            }
            break;
        case 2:
            func_020bbe14(9, cVar1);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            func_020bbe14(13, cVar1);
            break;
        }
        if (*(s8 *)(param_1 + 0x88) == *(s8 *)(data_0214f464 + 7)) {
            u8 *o = func_020bc3c4() + 136;
            *(s32 *)(o + 0x6c) = 1;
        } else {
            u8 *o = func_020bc3c4() + 136;
            *(s32 *)(o + 0x6c) = 0;
        }
    L3dc:
        *(u16 *)(param_1 + 0xea) = 548;
    E4:
        return 1;
    case 5:
        if (param_4 != 0) {
            *(u16 *)(param_1 + 0xea) = param_2 + 31;
            RESET_BODY(param_1, qq);
        }
        return 1;
    case 6:
        if (param_4 != 0) {
            *(u16 *)(param_1 + 0xea) = param_2 + 46;
            RESET_BODY(param_1, qq);
        }
        return 1;
    case 7:
        if (param_4 != 0) {
            *(u16 *)(param_1 + 0xea) = param_2 + 61;
            RESET_BODY(param_1, qq);
        }
        return 1;
    case 8:
        if (param_4 != 0) {
            *(u16 *)(param_1 + 0xea) = param_2 + 16;
            RESET_BODY(param_1, qq);
        }
        return 1;
    case 10:
    case 11:
        if (param_4 != 0) {
            *(u16 *)(param_1 + 0xea) = 0x224;
        }
        return 1;
    case 0:
    case 9:
    default:
        goto LDEF;
    }
LDEF:
    {
        s32 bl;
        s32 xl;
        xl = *(s16 *)(param_1 + 240);
        bl = 0;
        if (xl > 12) {
            if (xl < 111) {
                bl = 1;
            }
        }
        if (bl != 0) {
            return func_0202dc50(param_1, 0, param_2, (u16)(xl - 12), *(u8 *)(param_1 + 0xa5), param_4);
        }
    }
    if (param_4 != 0) {
        RESET_BODY(param_1, param_1 + 256);
    }
    return 0;
}
