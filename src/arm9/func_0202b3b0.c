#include "ctx.h"

/* transcribed from the original code: a 3-word copy and two calls, a switch on the result of
   func_02009c2c with eight arms. Each arm rolls the LCG at data_0214f464 (a pointer
   global; the seed is *ptr, new seed = seed * 0x10dcd + 1, stored back) and either stores
   one halfword at +234 or runs the table roll (data_0213cde7 index p[338] * 8). Arms 4..7
   test the roll the other way round (zero stores the constant, nonzero runs the table).
   The arm bodies use goto so the out-of-line blocks land after the arm, as in the target. */

typedef struct { u32 w[3]; } T3;

extern u32 *data_0214f464;
extern s8 data_0213cde7[];

extern void func_02067e34(u8 *a, void *b, void *c);
extern u32 func_02009c2c(void *a, u8 *b, u8 *c);

static inline u32 Roll(void)
{
    u32 nw = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nw;
    return nw;
}

#define FIRST_ROLL() ((u16)((((u32)(u16)Roll()) * 3) >> 16))

#define TABLE_G(P, TA, TB, TC, ID) \
    { \
        s32 k_ = *(s16 *)((P) + 256 + 82); \
        s32 t_ = data_0213cde7[k_ * 8]; \
        u32 m_; \
        u32 q_; \
        u32 r_; \
        if (t_ < 1) goto MZ_##ID; \
        if (t_ <= 3) { m_ = 1; goto MJ_##ID; } \
        MZ_##ID: m_ = 0; \
        MJ_##ID: ; \
        q_ = (u16)(m_ + 2); \
        r_ = (u16)((q_ * (u16)Roll()) >> 16); \
        if (r_ == 0) goto A_##ID; \
        if (r_ == 1) goto B_##ID; \
        if (r_ == 2) *(u16 *)((P) + 234) = (TC); \
        goto E_##ID; \
    A_##ID: \
        *(u16 *)((P) + 234) = (TA); \
        goto E_##ID; \
    B_##ID: \
        *(u16 *)((P) + 234) = (TB); \
    E_##ID: ; \
    }

/* arms 0..3: nonzero first roll stores NZV, zero runs the table */
#define ARM_NZ(P, ID, NZV, TA, TB, TC) \
    { \
        if (FIRST_ROLL() != 0) goto NZ_##ID; \
        TABLE_G(P, TA, TB, TC, ID); \
        goto END_##ID; \
    NZ_##ID: \
        *(u16 *)((P) + 234) = (NZV); \
    END_##ID: ; \
    }

/* arms 4..7: zero first roll stores ZV, nonzero runs the table */
#define ARM_Z(P, ID, ZV, TA, TB, TC)     {         switch (FIRST_ROLL()) {         case 0:             *(u16 *)((P) + 234) = (ZV);             goto END_##ID;         default:             break;         }         TABLE_G(P, TA, TB, TC, ID);     END_##ID: ;     }

void func_0202b3b0(u8 *param_1)
{
    T3 loc;
    s32 h234;

    h234 = *(s16 *)(param_1 + 234);
    if (h234 >= 612 && h234 <= 0x26b) {
        *(u16 *)(param_1 + 250) = 0;
        return;
    }
    loc = *(T3 *)(param_1 + 1168);
    func_02067e34(param_1 + 672, &loc, &loc);
    switch (func_02009c2c(&loc, param_1 + 420, param_1 + 396)) {
    case 0:
        ARM_NZ(param_1, c0, 612, 0x266, 616, 0x26a);
        *(u16 *)(param_1 + 250) = 0;
        return;
    case 1:
        ARM_NZ(param_1, c1, 612, 0x267, 617, 0x26b);
        *(u16 *)(param_1 + 250) = 0;
        return;
    case 2:
        ARM_NZ(param_1, c2, 0x265, 0x266, 616, 0x26a);
        *(u16 *)(param_1 + 250) = 0;
        return;
    case 3:
        ARM_NZ(param_1, c3, 0x265, 0x267, 617, 0x26b);
        *(u16 *)(param_1 + 250) = 0;
        return;
    case 4:
        ARM_Z(param_1, c4, 612, 0x266, 616, 0x26a);
        *(u16 *)(param_1 + 250) = 0;
        return;
    case 5:
        ARM_Z(param_1, c5, 0x265, 0x266, 616, 0x26a);
        *(u16 *)(param_1 + 250) = 0;
        return;
    case 6:
        ARM_Z(param_1, c6, 612, 0x267, 617, 0x26b);
        *(u16 *)(param_1 + 250) = 0;
        return;
    case 7:
        ARM_Z(param_1, c7, 0x265, 0x267, 617, 0x26b);
        *(u16 *)(param_1 + 250) = 0;
        return;
    default:
        return;
    }
}
