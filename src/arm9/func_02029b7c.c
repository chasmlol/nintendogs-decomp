#include "ctx.h"

extern u32 *data_0214f464;
extern u8 data_02152cd8[];
extern u8 *data_0214f460;

extern s32 func_020bc14c(void);
extern s32 func_02009dfc(s32 *a, u8 *b, u8 *c);
extern s32 func_02009d34(s32 *a, u8 *b, u8 *c);
extern s32 func_020aaec4(u8 *a, u8 *b, s32 c);
extern s32 func_020aaf38(u8 *a, u8 *b, s32 c);
extern void func_0202a378(u8 *p);

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(s32)(b) + 0x800) >> 12))

#define BLK_A(mask, cond, off, C, K)                                          \
    if (((p3 & (mask)) != 0) && (cond)) {                                    \
        v = *(s32 *)(*(u8 **)(p1 + 0x9e8) + 8);                              \
        r = FXM(FXM(v, v), (C));                                             \
        if (func_020aaec4(data_0214f460, p1 + (off), r) != 0) {              \
            func_0202a378(p1);                                               \
            *(s16 *)(p1 + 0xea) = (s16)(s2 + (K));                           \
            return 1;                                                        \
        }                                                                    \
    }

#define BLK_C(mask, cond, off, C, K)                                          \
    if (((p3 & (mask)) != 0) && (cond)) {                                    \
        v = *(s32 *)(*(u8 **)(p1 + 0x9e8) + 8);                              \
        r = FXM(FXM(v, v), (C));                                             \
        if (func_020aaec4(data_0214f460, p1 + (off), r) != 0) {              \
            func_0202a378(p1);                                               \
            *(s16 *)(p1 + 0xea) = (s16)(K);                                  \
            return 1;                                                        \
        }                                                                    \
    }

#define BLK_B(mask, cond, off, C, K)                                          \
    if (((p4 & (mask)) != 0) && (cond)) {                                    \
        v = *(s32 *)(*(u8 **)(p1 + 0x9e8) + 8);                              \
        r = FXM(FXM(v, v), (C));                                             \
        if (func_020aaf38(data_0214f460, p1 + (off), r) != 0) {              \
            *(u32 *)(p1 + 0x464) = 0;                                        \
            *(u16 *)(p1 + 0x12a) = 0;                                        \
            *(s16 *)(p1 + 0xea) = (s16)(s2 + (K));                           \
            return 1;                                                        \
        }                                                                    \
    }

u32 func_02029b7c(u8 *param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u8 *p1 = param_1;
    u32 p3 = param_3;
    u32 p4 = param_4;
    s32 s2 = param_2;
    s32 v;
    s32 r;
    s32 iVar5;
    s32 iVar7;
    s8 cVar1;
    s32 local_30[4];
    s32 t0;
    u32 t1;
    u32 t2;
    u32 local_2c;
    u32 local_28;

    if (((s32)(u32)(*(u16 *)0x04000304 & 0x8000) >> 15) == 0) {
        cVar1 = *(s8 *)(p1 + 0x88);
        if (cVar1 == func_020bc14c() && (s32)cVar1 == *(s8 *)((u8 *)data_0214f464 + 7)) {
            iVar5 = 7;
            iVar7 = 7;
            if (param_2 == 0) {
                t0 = *(s32 *)(data_02152cd8 + 0x54);
                local_30[0] = t0;
                local_30[1] = (*(u32 *)(data_02152cd8 + 0x60));
                local_30[2] = (*(u32 *)(data_02152cd8 + 0x6c));
                iVar5 = func_02009dfc(local_30, p1 + 0x1a4, p1 + 0x18c);
                iVar7 = func_02009d34(local_30, p1 + 0x1a4, p1 + 0x18c);
            }
            if (param_3 != 0) {
                BLK_A(1, iVar7 != 3, 0x36c, 0x19a, 326)
                BLK_A(2, iVar7 != 2, 0x2f4, 0x334, 335)
                BLK_A(4, iVar7 != 1, 0x300, 0x334, 344)
                BLK_A(8, iVar5 != 2 && iVar5 != 3, 0x30c, 0x334, 389)
                BLK_A(0x10, iVar5 != 1 && iVar5 != 3, 0x318, 0x334, 398)
                BLK_A(0x20, iVar7 != 2 && iVar7 != 0, 0x324, 0x19a, 427)
                BLK_A(0x40, iVar7 != 1 && iVar7 != 0, 0x330, 0x19a, 436)
                BLK_C(0x80, iVar7 != 0, 0x360, 0x802, 454)
                BLK_C(0x100, iVar5 != 0, 0x354, 0x334, 455)
            }
            if (param_4 != 0) {
                BLK_B(1, 1, 0x378, 0x1004, 0xf5)
                BLK_B(2, 1, 0x384, 0x14d2, 0xfe)
                BLK_B(4, 1, 0x348, 0x14d2, 263)
            }
        }
    }
    return 0;
}
