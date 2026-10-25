#include "ctx.h"

extern s16 data_02126868[];
extern u32 func_020d345c(u8 *p, u32 i, s32 *out);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_0206782c(s32 v);
extern u32 func_02067e9c(s32 a, s32 b);
extern void func_01ff8000(s32 *out, s32 a, s32 b);
extern void func_01ff8020(s32 *out, s32 a, s32 b);
extern void func_01ff803c(s32 *out, s32 a, s32 b);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);

typedef struct { s32 m[12]; } Mtx43;
typedef struct { u8 hdr[32]; Mtx43 mtx[3]; } Blk;

static inline s32 FXI(s32 a, s32 b)
{
    s64 t = (s64)a * (s64)b;
    return (s32)((t + 0x800) >> 12);
}
#define FX(a, b) FXI((a), (b))

static inline u32 Blend64(s32 x)
{
    s64 p = (s64)x * (s64)0x28be60db9391LL + ((s64)2048 << 32);
    return (((u32)(p >> 32)) << 4) >> 16;
}

void func_020c0778(u8 *p1)
{
    Blk *blk;
    s32 i;
    u32 uVar7;
    s32 A[3];
    s32 B[3];
    s32 C[3];
    s32 b4[12];
    s32 a84[12];
    s32 a54[12];
    s32 iv5;
    u32 uVar6;
    u32 uVar11;

    blk = *(Blk **)(p1 + 0x214);
    func_01ffdb08(*(s16 *)(p1 + 0x98));
    for (i = 0; i < 3; i++) {
        func_020d345c((u8 *)blk, i, A);
        func_020d345c((u8 *)blk, i + 1, B);
        func_02067e34(B, A, C);
        iv5 = func_0206782c(FX(C[2], C[2]) + FX(C[0], C[0]));
        uVar6 = func_02067e9c(C[1], iv5);
        uVar11 = (u16)(-(s32)Blend64((s32)uVar6));
        uVar7 = func_02067e9c(C[0], C[2]);
        uVar7 = Blend64((s32)uVar7);
        if (C[1] > 0) {
            uVar6 = (u32)(-(s32)uVar7);
        } else {
            uVar6 = uVar7;
        }
        func_01ff8000(b4, data_02126868[((s32)uVar11 >> 4) * 2], data_02126868[((s32)uVar11 >> 4) * 2 + 1]);
        func_01ff8020(a84, data_02126868[((s32)uVar7 >> 4) * 2], data_02126868[((s32)uVar7 >> 4) * 2 + 1]);
        func_01ff803c(a54, data_02126868[((s32)(u16)uVar6 >> 4) * 2], data_02126868[((s32)(u16)uVar6 >> 4) * 2 + 1]);
        func_01ff810c(b4, a84, blk->mtx[i].m);
        func_01ff810c(a54, blk->mtx[i].m, blk->mtx[i].m);
    }
}
