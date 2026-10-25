#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;

extern s32 func_0202775c(u8 *p, s32 a);
extern s32 func_02027708(s32 a);
extern s32 func_0202de0c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_020385e4(u8 *p);
extern void func_02027668(s32 a, u32 *b);
extern s32 func_0203945c(u8 *p, u32 *b, s32 c);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

#define ARM_BODY(ARR)                                                         \
    {                                                                         \
        u32 t;                                                                \
        u16 uVar3;                                                            \
        s32 v;                                                                \
        u32 cnt;                                                              \
        cnt = *data_0214f464 * 0x10dcd + 1;                                   \
        *data_0214f464 = cnt;                                                 \
        t = (u32)(u16)(p3 + 2) * (u32)(u16)cnt;                               \
        uVar3 = (u16)(t >> 16);                                               \
        switch (uVar3) {                                                      \
        case 0:                                                               \
            if (p2 == 0) {                                                    \
                return 0;                                                     \
            }                                                                 \
            v = func_02027708(p2);                                            \
            SwapByte(v, p1 + 0x8a);                                           \
            func_0203e908(p1, 0x304);                                         \
            return 1;                                                         \
        case 1:                                                               \
            if (p2 != 0 && func_0202de0c(p1) == 0) {                          \
                v = func_02027708(p2);                                        \
                SwapByte(v, p1 + 0x8a);                                       \
                func_0203e908(p1, 0x305);                                     \
                return 1;                                                     \
            }                                                                 \
            return 0;                                                         \
        case 2:                                                               \
            if (p2 != 0) {                                                    \
                v = func_02027708(p2);                                        \
                SwapByte(v, p1 + 0x8a);                                       \
                switch (func_020385e4(p1)) {                                  \
                case 0:                                                       \
                    func_0203e908(p1, 0x274);                                 \
                    return 1;                                                 \
                case 1:                                                       \
                    func_0203e908(p1, 0x275);                                 \
                    return 1;                                                 \
                case 2:                                                       \
                    func_0203e908(p1, 0x276);                                 \
                    return 1;                                                 \
                case 3:                                                       \
                    func_0203e908(p1, 0x277);                                 \
                    return 1;                                                 \
                }                                                             \
            }                                                                 \
            return 0;                                                         \
        default:                                                              \
            if (p2 == 0) {                                                    \
                return 0;                                                     \
            }                                                                 \
            func_02027668(p2, ARR);                                           \
            v = func_02027708(p2);                                            \
            return func_0203945c(p1, ARR, v);                                 \
        }                                                                     \
    }

s32 func_02057468(u8 *p1, s32 p2, s32 p3)
{
    u32 aiStack_38[3];
    u32 aiStack_2c[3];
    u32 aiStack_20[4];
    s32 r;

    r = func_0202775c(p1, p2);
    if (r == 0) {
        goto L0;
    }
    if (r == 1) {
        goto L1;
    }
    if (r != 2) {
        goto Ldef;
    }
    ARM_BODY(aiStack_38)
L1:
    ARM_BODY(aiStack_2c)
L0:
    ARM_BODY(aiStack_20)
Ldef:
    return 0;
}
