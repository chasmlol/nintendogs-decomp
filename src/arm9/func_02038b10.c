#include "ctx.h"

extern u8 *data_02159428;
extern u8 data_02126868[];
extern u8 *data_0214f464;
extern u8 *data_0214f45c;

extern s16 func_02068078(s32 a, s32 b);
extern s32 func_0206782c(s32 a);
extern void func_020395b4(s32 *a, s32 *b, s32 *c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern void func_02039008(u8 *p, s32 *a, u32 *b, u32 *c, u32 *d);
extern u8 *func_0200c498(u32 a, u32 b);

#define SQ12(x) ((u32)((((s64)(s32)(x)) * (s32)(x) + 0x800) >> 12))
#define FXM(a, t) ((s32)(u32)((((s64)(s32)(a)) * (s32)(t) + 0x800) >> 12))

#define LOOP3(H, ZL, LD, JN) \
    { \
        s32 i = 0; \
        u8 *iv5; \
        do { \
            if (i != (s8)param_1[0x88]) { \
                if (i < 0) goto ZL; \
                if (i < 3) goto LD; \
            ZL: \
                iv5 = 0; \
                goto JN; \
            LD: \
                iv5 = *(u8 **)(data_0214f464 + (i << 2) + 0x54); \
            JN: \
                if (iv5 != 0) { \
                    func_020395b4(loc, (s32 *)(param_1 + 0x2a0), (s32 *)(iv5 + 0x2a0), t1, t2, iv6, param_7, H); \
                } \
            } \
            i = (s16)(i + 1); \
        } while (i < 3); \
    }

#define LOOPCNT(H) \
    { \
        s32 i = 0; \
        u8 *q; \
        if (*(s16 *)(*(u8 **)(data_0214f45c + 0x20) + 0x2a) > 0) { \
            do { \
                q = func_0200c498(10, i); \
                func_020395b4(loc, (s32 *)(param_1 + 0x2a0), (s32 *)(q + 8), t1, t2, iv6, param_7, H); \
                i = (s16)(i + 1); \
            } while (i < *(s16 *)(*(u8 **)(data_0214f45c + 0x20) + 0x2a)); \
        } \
    }

typedef struct {
    s32 w[3];
} T12;

void func_02038b10(u8 *param_1, u32 *param_2, u32 *param_3, u32 *param_4, s32 param_5,
                   s32 param_6, s32 param_7, u32 param_8)
{
    int iv6;
    s32 loc[3];
    int t1;
    s32 t2;

    *(T12 *)loc = *(T12 *)(param_1 + 0x26c);

    if ((1 & (s32)param_8) != 0) {
        u32 s1 = SQ12(*(s32 *)(0x2a0 + param_1));
        s32 a = *(s32 *)(0xc + data_02159428) - 0x3000;
        s32 s = s1 + SQ12(*(s32 *)(param_1 + 0x2a8));
        if (s > (s32)SQ12(a)) {
            loc[0] = 0;
            loc[1] = 0;
            loc[2] = 0;
        }
    }
    if (((u32)param_8 & 0x76) != 0) {
        u32 kx;
        s16 sv;
        sv = func_02068078(param_5, param_6);
        iv6 = func_0206782c(param_7);
        kx = (sv >> 4) * 2;
        t1 = *(s16 *)(data_02126868 + 2 * kx);
        t2 = *(s16 *)(data_02126868 + (kx + 1) * 2);
        if ((param_8 & 2) != 0) {
            LOOP3(8, Lz1, Ld1, Lj1);
        } else if ((param_8 & 4) != 0) {
            LOOP3(5, Lz2, Ld2, Lj2);
        }
        if ((16 & param_8) != 0) {
            LOOPCNT(8);
        } else if ((32 & param_8) != 0) {
            LOOPCNT(3);
        } else if ((64 & param_8) != 0) {
            LOOPCNT(2);
        }
    }
    if ((0x200 & param_8) != 0) {
            s16 k2;
            s32 t0;
            u32 kx;
            s32 sv;
            s32 t2;
            s16 k1;
        s32 x = *(s32 *)(*(u8 **)(0x9e8 + param_1) + 8);
        u32 a = *(s32 *)(0xc + data_02159428) - FXM(x, 0x14cc);
        int a2 = a;
        if ((s32)(SQ12(loc[0]) + SQ12(loc[2])) > (s32)SQ12(a)) {
            sv = func_02068078(loc[0], loc[2]);
            kx = (sv >> 4) * 2;
            k1 = *(s16 *)(data_02126868 + kx * 2);
            loc[0] = FXM((s32)a, k1);
            k2 = *(s16 *)(data_02126868 + (kx + 1) * 2);
            loc[2] = (s32)((((s64)a2) * k2 + 0x800) >> 12);
        }
    }
    func_02039008(param_1, loc, param_2, param_3, param_4);
}
