#include "ctx.h"

typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;

#define N 128

extern fx32 data_027c0930[N];     /* real part */
extern fx32 data_027c0730[N];     /* imaginary part */
extern s32 data_027c0530[N];      /* bit-reversal table */
extern const fx16 data_02126868[]; /* FX_SinCosTable_ */
extern s32 data_027c042c[N / 2 + 1]; /* magnitudes */
extern s32 data_027c03ac[32];     /* band averages */

extern void func_0206c7f0(u32 data, void *dest, u32 size); /* MIi_CpuClear32 */
extern fx32 func_0206782c(fx32 x);                         /* FX_Sqrt */

#define FX_MUL(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))

/* every MI_CpuClear32 in this game spills its zero to the stack */
static inline void MI_CpuClear32(void *dest, u32 size)
{
    volatile u32 zero = 0;
    func_0206c7f0(zero, dest, size);
}

static inline fx16 FX_SinIdx(int idx)
{
    return data_02126868[((idx >> 4) << 1)];
}

static inline fx16 FX_CosIdx(int idx)
{
    return data_02126868[((idx >> 4) << 1) + 1];
}

/* 128-point FFT (Okumura's fft() in fx32), magnitude spectrum, peak search, 2-bin averages */
void func_020dc918(const s16 *wave)
{
    int i, j, k, ik, h, d, k2;
    fx32 s, c, dx, dy;
    s32 v, maxv, maxi;

    for (i = 0; i < N; i++) {
        data_027c0930[i] = (wave[i] >> 6) << 12;
    }
    MI_CpuClear32(data_027c0730, sizeof(data_027c0730));
    for (i = 0; i < N; i++) {
        j = data_027c0530[i];
        if (i < j) {
            fx32 t = data_027c0930[i];
            data_027c0930[i] = data_027c0930[j];
            data_027c0930[j] = t;
        }
    }
    for (k = 1; k < N; k = k2) {
        h = 0;
        k2 = k + k;
        d = N / k2;
        for (j = 0; j < k; j++) {
            c = FX_CosIdx(h << 9);
            s = FX_SinIdx(h << 9);
            for (i = j; i < N; i += k2) {
                ik = i + k;
                dx = FX_MUL(s, data_027c0730[ik]) + FX_MUL(c, data_027c0930[ik]);
                dy = FX_MUL(c, data_027c0730[ik]) - FX_MUL(s, data_027c0930[ik]);
                data_027c0930[ik] = data_027c0930[i] - dx;
                data_027c0930[i] += dx;
                data_027c0730[ik] = data_027c0730[i] - dy;
                data_027c0730[i] += dy;
            }
            h += d;
        }
    }
    for (i = 0; i < N / 2 + 1; i++) {
        data_027c0930[i] /= N;
        data_027c0730[i] /= N;
    }
    maxv = 0;
    maxi = 1;
    data_027c042c[0] = 0;
    for (i = 1; i < N / 2 + 1; i++) {
        data_027c042c[i] = (func_0206782c(FX_MUL(data_027c0930[i], data_027c0930[i]) + FX_MUL(data_027c0730[i], data_027c0730[i])) << 3) >> 12;
        if (i > 6 && data_027c042c[i] > 5) {
            v = data_027c042c[i];
            if ((i - maxi < 3 && maxv < v) ||
                (i % maxi > i / maxi * 2 && maxi - i % maxi > i / maxi * 2 && maxv * 3 / 2 < v) ||
                maxv * 16 < v) {
                maxv = v;
                maxi = i;
            }
        }
    }
    for (i = 0; i < 32; i++) {
        s32 m, sum;
        sum = 0;
        for (m = 0; m < 2; m++) {
            sum += (data_027c042c + i * 2)[m];
        }
        data_027c03ac[i] = sum / 2;
    }
}
