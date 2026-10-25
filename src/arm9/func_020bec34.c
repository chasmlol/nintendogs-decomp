#include "ctx.h"
#pragma opt_propagation off

extern s32 func_01ffdb08(s32 a);
extern void func_020beec0(u8 *p, s32 a, u32 b);
extern void func_02027178(s32 a, u32 *b, u32 c);
extern void func_01ff810c(u8 *a, u32 *b, u8 *c);
extern s32 func_02028130(s32 a);
extern void func_02027448(s32 a);
extern void func_02027640(s32 a, u32 *b);
extern void func_01ff832c(s32 k, u32 *a, u32 *b, u32 *c);
extern s32 func_02028118(s32 a);
extern void func_02027668(s32 a, u32 *b);
extern void func_0202756c(s32 a, u32 *b);
extern u8 data_02142898[];

typedef struct { u32 a; u32 b; } P2;

#define FX(k, x) ((s32)((((s64)(s32)(k)) * (s64)(s32)(x) + 0x800) >> 12))

void func_020bec34(u8 *p, u32 *p2)
{
    u32 F[66];
    s32 fld;
    s32 h;
    s32 rv;

    rv = func_01ffdb08(*(s16 *)(p + 152));
    {
        s32 mode = *(s32 *)(p + 0x168);
        asm { mov h, rv }
        switch (mode) {
        case 0: {
            func_020beec0(p, func_01ffdb08(*(s16 *)(p + 152)), (u32)p2);
            func_02027178(h, &F[0], 12);
            func_01ff810c(p + 304, &F[0], p + 200);
            return;
        }
        case 1: {
            s32 k;
            func_02028130(rv);
            func_02027448(h);
            func_02027640(h, &F[24]);
            func_02027178(h, &F[12], 12);
            F[27] = F[12];
            F[28] = F[13];
            F[29] = F[14];
            F[30] = F[15];
            F[31] = F[16];
            F[32] = F[17];
            k = FX(*(s32 *)(p + 0x128), 0xccd);
            func_01ff832c(-k, &F[30], &F[24], p2);
            func_01ff832c(FX(*(s32 *)(p + 0x128), 0x333), &F[27], p2, p2);
            func_02027178(h, &F[33], 12);
            func_01ff810c(p + 304, &F[33], p + 200);
            return;
        }
        case 2: {
            s32 k;
            u32 tb;
            s32 idx;
            asm { ldr fld, [p, #0x128] }
            idx = func_02028118(rv);
            idx = idx << 3;
            tb = (u32)data_02142898;
            func_02027668(h, &F[45]);
            func_0202756c(h, &F[48]);
            *(P2 *)&F[60] = *(P2 *)&F[48];
            F[62] = F[50];
            F[63] = F[54];
            *(P2 *)&F[64] = *(P2 *)&F[55];
            func_02028130(h);
            k = FX(*(s32 *)(tb + idx), func_02028130(h));
            func_01ff832c(0, &F[60], &F[45], p2);
            func_01ff832c(fld + k, &F[63], p2, p2);
            p2[1] = *(u32 *)(p + 0x128);
            return;
        }
        }
    }
}
