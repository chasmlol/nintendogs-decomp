#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;
extern u8 *data_0215942c;
extern s16 data_0213b490[];
extern u32 data_0213b7d0[];
extern s32 func_02028db0(u8 *p, s32 a);
extern void func_020bbe14(s32 a, s32 b);
extern u8 *func_020bc3c4(void);
extern s32 func_020bc14c(void);
extern void func_ov003_0218c504(u8 *p, s32 a);

#define TICKK(K, DST) \
    { \
        v = *(u32 *)data_0214f464; \
        v = v * 0x10dcd + 1; \
        *(u32 *)data_0214f464 = v; \
        DST = (u16)((((u32)(u16)v) * (u32)(K)) >> 16); \
    }

#define RESET_STATE() \
    { \
        p1[0xb4] = 1; \
        p1[0xa8] = 0; \
        *(u16 *)(p1 + 0x112) = 0; \
        *(s16 *)(p1 + 0xf0) = 111; \
        p1[0xa5] = 0; \
        p1[0xa3] = 0; \
        return 0; \
    }

s32 func_020289d0(u8 *param_1, s32 param_2, s32 p3)
{
    s32 r7;
    s32 r6;
    s32 r4;
    s32 cV;
    u32 v;
    u32 t;
    u32 q;
    u8 *p1;
    s32 p2;

    p1 = param_1;
    r6 = *(vu16 *)(p1 + 0x112);
    p2 = param_2;
    if (r6 != 0) {
        return 0;
    }
    if (*(u8 *)(p1 + 0xa8) == 0) {
        goto L3a0;
    }
    if (p2 == 15) {
        return 1;
    }
    if (*(s8 *)(p1 + 0x8b) == 5 && *(s16 *)(p1 + 0xf0) == -1) {
        cV = *(s8 *)(p1 + 0x8e);
        if (cV == 1) {
            goto C1;
        }
        if (cV == 3) {
            goto C3;
        }
        if (cV != 4) {
            goto L1f4;
        }
        goto C4;
    C3:
        TICKK(5, t);
        if (t != 0) {
            goto L1f4;
        }
        RESET_STATE();
    C1:
        v = *(u32 *)data_0214f464;
        v = v * 0x10dcd + 1;
        *(u32 *)data_0214f464 = v;
        if ((u16)((v << 16) >> 31) == 0) {
            goto C4;
        }
        RESET_STATE();
    C4:
        TICKK(5, t);
        if (t == 0) {
            goto L1f4;
        }
        RESET_STATE();
    }
L1f4:
    if (*(u16 *)data_0215942c == 12) {
        goto L264;
    }
    *(s16 *)(p1 + 0x142) = *(s16 *)(p1 + 0x140);
    *(s16 *)(p1 + 0x146) = *(s16 *)(p1 + 0x144);
    *(s16 *)(p1 + 0x140) = *(s16 *)(p1 + 0x13e);
    if (*(u16 *)data_0215942c == 3) {
        *(s16 *)(p1 + 0x144) = 20;
    } else {
        *(s16 *)(p1 + 0x144) = data_0213b490[*(u8 *)(*(u8 **)(p1 + 0x9e8) + 0x12) - 1];
    }
    *(s16 *)(p1 + 0x13e) = -1;
L264:
    *(s16 *)(p1 + 0x13e) = 10;
    func_ov003_0218c504(p1, p2);

    if (*(s16 *)(p1 + 0xf0) != 4) {
        goto L384;
    }
    r6 = *(s8 *)(p1 + 0x88);
    r4 = (s32)data_0213b7d0[p2];
    r7 = 1;
    if (r6 != func_020bc14c()) {
        if (r6 != *(s8 *)(data_0214f464 + 7)) {
            r7 = 0;
        }
    }
    if (r7 == 0) {
        goto L384;
    }
    switch (r4) {
    case 0:
    case 3:
    default:
        func_020bbe14(5, r6);
        goto L348;
    case 1:
        if (*(u16 *)(p1 + 0xf2) == 28) {
            func_020bbe14(11, r6);
        } else {
            func_020bbe14(7, r6);
        }
        goto L348;
    case 2:
        func_020bbe14(9, r6);
        goto L348;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        func_020bbe14(13, r6);
        goto L348;
    }
L348:
    if (*(s8 *)(p1 + 0x88) == *(s8 *)(data_0214f464 + 7)) {
        q = (u32)func_020bc3c4() + 136;
        *(s32 *)(q + 0x6c) = 1;
    } else {
        q = (u32)func_020bc3c4() + 136;
        *(s32 *)(q + 0x6c) = 0;
    }
L384:
    p1[0xa8] = 0;
    return 1;
L3a0:
    if (p3 == 0) {
        return 0;
    }
    return func_02028db0(param_1, (s16)p2);
}
