#include "ctx.h"

extern u32 data_02154340[];
extern u32 data_02154380[];

extern void func_0206c834(u32 a, u32 *b, u32 c);
extern void func_020778d0(void);
extern void func_0206a0a4(u32 a);
extern void func_0206a088(u32 a);
extern u32 func_0206a33c(u32 a);
extern u32 func_0206a2f4(u32 a);
extern void func_0206a0c0(u32 *a);

typedef struct {
    u8 *c;
    u32 *rs1;
    u8 pad[0xcc - 8];
    u32 isEvpCached[8];
} RS;

#define FX_U(v, k) (((k) * (s64)(s32)(v)) >> 12)
#define FX_S(k, v) (((s64)(s32)(k) * (s32)(v)) >> 12)

static inline u32 BitVecCheck(const u32 *vec, u32 idx)
{
    return vec[idx >> 5] & (1 << (idx & 31));
}

static inline void BitVecSet(u32 *vec, u32 idx)
{
    vec[idx >> 5] |= 1 << (idx & 31);
}

void func_020756e0(u32 *P)
{
    s64 K;
    u32 flag;
    u8 *r8;
    u32 i;
    u32 *r6w;
    u32 *r5w;
    u32 piv;
    u32 count;
    u32 t100;
    vu32 zero;
    u32 acc[21];
    u8 *A;
    u32 *Bp;
    u32 C;
    u32 a;

    Bp = (u32 *)P[1];
    C = Bp[1];
    A = (u8 *)P[0];
    piv = C + ((u32 *)C)[4];
    count = A[2];
    r8 = A + 3;
    K = 0;
    zero = 0;

    func_0206c834(zero, acc, 84);
    func_020778d0();
    *(vu32 *)0x04000440 = 0;
    *(vu32 *)0x0400044c = 1;
    *(vu32 *)0x04000454 = 0;
    *(vu32 *)0x04000440 = 2;

    for (i = 0; i < count; i++) {
        a = r8[1];
        t100 = a * 100;
        flag = BitVecCheck(((RS *)P)->isEvpCached, a);
        r6w = (u32 *)((u8 *)data_02154340 + t100);
        if (flag == 0) {
            BitVecSet(((RS *)P)->isEvpCached, a);
            *(vu32 *)0x04000450 = r8[0];
            *(vu32 *)0x04000440 = 1;
            func_0206a0a4(piv + a * 84);
        }
        if (i != 0) {
            acc[12] += FX_U(r5w[0], K);
            acc[13] += FX_U(r5w[1], K);
            acc[14] += FX_U(r5w[2], K);
            acc[15] += FX_U(r5w[3], K);
            acc[16] += FX_U(r5w[4], K);
            acc[17] += FX_U(r5w[5], K);
            acc[18] += FX_U(r5w[6], K);
            acc[19] += FX_U(r5w[7], K);
            acc[20] += FX_U(r5w[8], K);
        }
        if (flag == 0) {
            while (func_0206a33c((u32)r6w) != 0) {
            }
            *(vu32 *)0x04000440 = 2;
            func_0206a088(piv + a * 84 + 48);
        }
        r5w = (u32 *)((u8 *)data_02154380 + t100);
        K = (s32)((u32)*(vu8 *)(r8 + 2) << 4);
        acc[0] += FX_S(K, r6w[0]);
        acc[1] += FX_S(K, r6w[1]);
        acc[2] += FX_S(K, r6w[2]);
        acc[3] += FX_S(K, r6w[4]);
        acc[4] += FX_S(K, r6w[5]);
        acc[5] += FX_S(K, r6w[6]);
        acc[6] += FX_S(K, r6w[8]);
        acc[7] += FX_S(K, r6w[9]);
        acc[8] += FX_S(K, r6w[10]);
        acc[9] += FX_S(K, r6w[12]);
        acc[10] += FX_S(K, r6w[13]);
        acc[11] += FX_S(K, r6w[14]);
        r8 = r8 + 3;
        if (flag == 0) {
            while (func_0206a2f4((u32)r5w) != 0) {
            }
        }
    }

    acc[12] += FX_U(r5w[0], K);
    acc[13] += FX_U(r5w[1], K);
    acc[14] += FX_U(r5w[2], K);
    acc[15] += FX_U(r5w[3], K);
    acc[16] += FX_U(r5w[4], K);
    acc[17] += FX_U(r5w[5], K);
    acc[18] += FX_U(r5w[6], K);
    acc[19] += FX_U(r5w[7], K);
    acc[20] += FX_U(r5w[8], K);
    func_0206a0c0(&acc[12]);
    *(vu32 *)0x04000440 = 1;
    func_0206a0c0(acc);
    *(vu32 *)0x04000440 = 0;
    *(vu32 *)0x04000450 = 1;
    *(vu32 *)0x04000440 = 2;
    *(vu32 *)0x0400044c = ((u8 *)P[0])[1];
    P[0] = (u32)(u8 *)P[0] + 3 * (((u8 *)P[0])[2] + 1);
}
